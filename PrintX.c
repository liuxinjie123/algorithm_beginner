/**
 * 请你编程画一个放大的’X’。
 *
 * 如2*2的’X’应如下所示：
 *
 * XX
 * XX
 *
 * 5*5的’X’如下所示：
 *
 * X   X
 *  X X
 *   X
 *  X X
 * X   X
 *
 * 输入说明 :
 *
 * 输入数据第一行是一个整数T，表示有T组测试数据；
 *
 * 接下来有T行，每行有一个正数n（2 <= n <= 80），表示放大的规格。
 *
 * 输出说明 :
 *
 * 对于每一个n打印一个规格为n * n放大的’X’；每组输出后面空一行。
 *
 * 注意：每一行输出的字符X为大写的'X'，第一行的最前与最后都无空格，每行的最后都无空格。
 *
 * 输入范例 :
 *
 * 3
 * 2
 * 5
 * 8
 *
 * 输出范例 :
 *
 * XX
 * XX
 *
 * X   X
 *  X X
 *   X
 *  X X
 * X   X
 *
 * X      X
 *  X    X
 *   X  X
 *    XX
 *    XX
 *   X  X
 *  X    X
 * X      X
 *
 */

 #include <stdio.h>

void printX(int n) {
    if (2 == n) {
        printf("XX\n");
        printf("XX\n");
    } else {
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (j == i || j == n-i-1) {
                    printf("X");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    printf("\n");
 }

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int i=0; i<n; i++) {
        printX(arr[i]);
    }
    return 0;
}


