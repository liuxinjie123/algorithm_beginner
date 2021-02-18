/**
 * �����̻�һ���Ŵ�ġ�X����
 *
 * ��2*2�ġ�X��Ӧ������ʾ��
 *
 * XX
 * XX
 *
 * 5*5�ġ�X��������ʾ��
 *
 * X   X
 *  X X
 *   X
 *  X X
 * X   X
 *
 * ����˵�� :
 *
 * �������ݵ�һ����һ������T����ʾ��T��������ݣ�
 *
 * ��������T�У�ÿ����һ������n��2 <= n <= 80������ʾ�Ŵ�Ĺ��
 *
 * ���˵�� :
 *
 * ����ÿһ��n��ӡһ�����Ϊn * n�Ŵ�ġ�X����ÿ����������һ�С�
 *
 * ע�⣺ÿһ��������ַ�XΪ��д��'X'����һ�е���ǰ������޿ո�ÿ�е�����޿ո�
 *
 * ���뷶�� :
 *
 * 3
 * 2
 * 5
 * 8
 *
 * ������� :
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


