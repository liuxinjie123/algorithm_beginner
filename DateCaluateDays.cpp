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
            // 超过了当月最大月数
            Day = 1;
            Month++;

            if (Month > 12) {
                // 超过 12月，进入下一年
                Year++;
                Month=1;
            }
        }
    }
};

// 保存预处理的天数
int buf[5001][13][32];

int main() {
    Date tmp;
    // 天数计算
    int cnt = 0;
    // 初始化日期为 0年1月1日
    tmp.Day = 1;
    tmp.Month = 1;
    tmp.Year = 0;

    // 日期不能超过5000年
    while(tmp.Year != 5001) {
        buf[tmp.Year][tmp.Month][tmp.Day] = cnt;
        tmp.nextDay();
        cnt++;
    }


    int y1, m1, d1;
    int y2, m2, d2;

    while (scanf("%4d%2d%2d", &y1, &m1, &d1) != EOF) {
        // 读入要计算的两个日期
        scanf("%4d%2d%2d", &y2, &m2, &d2);
        printf("%d\n\n", Abs(buf[y1][m1][d1] - buf[y2][m2][d2]) + 1);
        return 0;
    }
    return 0;
}























