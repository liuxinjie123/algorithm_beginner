#include<iostream>
using namespace std;

int main() {
    int n;
    printf("input\n");
    while(scanf("%d", &n) != EOF) {
        int buf[n][11];
        int x,y,i,j,k,key;
        for (x=0; x<n; x++) {
            char c;
            while((c == getchar()) != '\n') {
                for (y=0; y<11; y++) {
                    scanf("%d", &buf[x][y]);
                }
            }
        }
        printf("output\n");
        for (i=0; i<n; i++) {
            for (j=1; j<=3; j++) {
                for (k=j; k<11; k++) {
                    if (buf[i][j] < buf[i][k]) {
                        int temp = buf[i][j];
                        buf[i][j] = buf[i][k];
                        buf[i][k] = temp;
                        key = buf[i][j];
                    }
                }
            }
            printf("%d %d\n", buf[i][0], key);
        }
        return 0;
    }
    return 0;
}
