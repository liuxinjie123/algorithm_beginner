#include <iostream>
using namespace std;

#define ISLEAPYEAR(n) n%4 == 0 && n%100 != 0 || n%400 == 0;

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
        if (Day > dayOfMonth(Month, ISLEAPYEAR(Year))) {
            Day = 1;
            Month++;
            if (Month > 12) {
                Month=1;
                Year++;
            }
        }
    }
};




