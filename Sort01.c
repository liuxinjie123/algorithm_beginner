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
#include <stdio.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF) {
        int buf[n];

        //  ‰»Î¥˝≈≈–Ú ˝◊÷
        for (int i=0; i<n; i++) {
            scanf("%d", &buf[i]);
        }

        // √∞≈›≈≈–Ú
        for (int i=0; i<n; i++) {
            for (int j=0; j<n-i-1; j++) {
                if (buf[j] > buf[j+1]) {
                    int temp = buf[j];
                    buf[j] = buf[j+1];
                    buf[j+1] = temp;
                }
            }
        }

        for (int i=0; i<n; i++) {
            printf(" %d", buf[i]);
        }
        printf("\n\n");
        return 0;
    }
    printf("\n\n");
    return 1;
}
