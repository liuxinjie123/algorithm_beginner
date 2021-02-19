#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

struct E {
    char name[101];
    int age;
    int score;

    bool operator < (const E &b) const {
        if (score != b.score) {
            return score > b.score;
        }
        int tmp = strcmp(name, b.name);
        if (0 != tmp) {
            return tmp < 0;
        } else {
            return age < b.age;
        }
    }
} buf[1000];


int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        for (int i=0; i<n; i++) {
            scanf("%s%d%d", &buf[i].name, &buf[i].age, &buf[i].score);
        }
        sort(buf, buf+n);

        cout<<endl;
        for (int i=0; i<n; i++) {
            printf("%s %d %d\n", buf[i].name, buf[i].age, buf[i].score);
        }
        cout<<endl<<endl;
        return 0;
    }
    cout<<endl;
    return 0;
}
