#include <iostream>
using namespace std;

#define ISLEAPYEAR(n) n%100!=0 && n%4 == 0 || n%400 == 0 ? 1:0

int dayOfMonth[13][2] = {
    0,0,
    31,31,
    28,29,
    31,31,
    30,30,
    31,31,
    30,30,
    31,31,
    31,31,
    30,30,
    31,31,
    30,30,
    31,31
};

int Abs(int x) {
    return x < 0 ? -x : x;
}

struct Date {
    int Day;
    int Month;
    int Year;

    void nextDay() {
        Day++;
        if (Day > dayOfMonth[Month][ISLEAPYEAR(Year)]) {
            // �����˵����������
            Day = 1;
            Month++;

            if (Month > 12) {
                // ���� 12�£�������һ��
                Year++;
                Month=1;
            }
        }
    }
};

// ����Ԥ���������
int buf[5001][13][32];

int main() {
    Date tmp;
    // ��������
    int cnt = 0;
    // ��ʼ������Ϊ 0��1��1��
    tmp.Day = 1;
    tmp.Month = 1;
    tmp.Year = 0;

    // ���ڲ��ܳ���5000��
    while(tmp.Year != 5001) {
        buf[tmp.Year][tmp.Month][tmp.Day] = cnt;
        tmp.nextDay();
        cnt++;
    }


    int y1, m1, d1;
    int y2, m2, d2;

    while (scanf("%4d%2d%2d", &y1, &m1, &d1) != EOF) {
        // ����Ҫ�������������
        scanf("%4d%2d%2d", &y2, &m2, &d2);
        printf("%d\n\n", Abs(buf[y1][m1][d1] - buf[y2][m2][d2]) + 1);
        return 0;
    }
    return 0;
}























