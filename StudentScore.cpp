#include <iostream>
using namespace std;

int main(){
    int n;
    while(scanf("%d", &n) != EOF) {
        int a[n];
        int score, nums=0;
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        scanf("%d", &score);
        for (int i=0; i<n; i++) {
            if (a[i] == score) {
                nums++;
            }
        }
        printf("\n%d\n\n", nums);
        return 0;
    }
    return 0;
}
