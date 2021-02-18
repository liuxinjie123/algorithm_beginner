/**
 * еепР
 *
 * input
 * 4
 * 1582
 *
 * output
 * 1258
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cout<<" c++ 2:"<<endl;
    int n;
    while(scanf("%d", &n) != EOF) {
        int buf[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &buf[i]);
        }

        sort(buf, buf+n);

        for (int i=0; i<n; i++){
            printf(" %d", buf[i]);
        }
        cout<<endl<<endl;
        return 0;
    }
}
