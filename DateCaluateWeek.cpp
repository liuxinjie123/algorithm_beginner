#include <iostream>
#include <string.h>
using namespace std;

#define ISLEAPYEAR(n) n%4 == 0 && n%100 != 0 || n%400 == 0

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
            Day = 1;
            Month++;
            if (Month > 12) {
                Month=1;
                Year++;
            }
        }
    }
};

int buf[3001][12][31];

char monthName[13][20] = {
    "",
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
};

char weekName[7][20] = {
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
};

int main() {
    Date tmp;
    tmp.Year = 0;
    tmp.Month = 1;
    tmp.Day = 1;

    int count = 0;

    while(tmp.Year < 3001) {
        buf[tmp.Year][tmp.Month][tmp.Day] = count;
        tmp.nextDay();
        count++;
    }

    int day, month, year;
    char mName[20];

    while (scanf("%d%s%d", &day, mName, &year)) {
        for (month=1; month<=12; month++) {
            if (strcmp(mName, monthName[month]) == 0) {
                break;
            }
        }
        printf("%d, %d, %d\n\n", year, month, day);
        int days = buf[year][month][day] - buf[2021][2][19];
        // 今天为星期五，加5
        days += 5;
        printf("%s\n\n", weekName[(days % 7 + 7) % 7]);
        return 0;
    }
    return 0;
}







