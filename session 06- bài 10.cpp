#include<stdio.h>
int main() {
    int n, i;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d khong la so nguyen to.\n", n);
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                printf("%d khong la so nguyen to.\n", n);
                return 0;
            }
        }
        printf("%d la so nguyen to.\n", n);
    }
    return 0;
}
