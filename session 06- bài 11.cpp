#include<stdio.h>
int main() {
    int n, count = 0, num = 2;
    printf("Nhap so n: ");
    scanf("%d", &n);
    while (count < n) {
        int songuyentodautien = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                 songuyentodautien= 0;
                break;
            }
        }
        if (songuyentodautien) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
    return 0;
}
