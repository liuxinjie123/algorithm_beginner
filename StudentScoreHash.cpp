#include <iostream>
using namespace std;

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int Hash[101] = {0};
        for (int i=0; i<n; i++) {
            int x;
            scanf("%d", &x);
            Hash[x]++;
        }
        int x;
        scanf("%d", &x);
        printf("\n%d\n\n", Hash[x]);
        return 0;
    }
    return 0;
}
