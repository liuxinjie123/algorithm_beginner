/**
 * ≈≈–Ú
 *
 * input
 * 4
 * 1582
 *
 * output
 * 1258
 */
#include <iostream>
using namespace std;

int main() {
    cout<<" c++: "<<endl;
    int n;
    while (scanf("%d", &n) != EOF) {
        int buf[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &buf[i]);
        }

        for(int i=0; i<n; i++) {
            cout<<" "<<buf[i];
        }
        cout<<endl;

        // √∞≈›À„∑®
        for (int i=0; i<n; i++) {
            for (int j=0; j<n-i-1; j++) {
                if (buf[j] > buf[j+1]) {
                    int temp = buf[j];
                    buf[j] = buf[j+1];
                    buf[j+1] = temp;
                }
            }
        }

        for(int i=0; i<n; i++) {
            cout<<" "<<buf[i];
        }
        cout<<endl<<endl;
        return 0;
    }
    cout<<endl;
    return 1;
}
