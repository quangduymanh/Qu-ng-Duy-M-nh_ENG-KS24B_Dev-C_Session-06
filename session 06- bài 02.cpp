#include<stdio.h>

int main() {
    int a, countEven = 0, countOdd = 0;
    for(int i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &a);
        if(a % 2 == 0)
            countEven++;
        else
            countOdd++;
    }
    printf("So luong so chan: %d\n", countEven);
    printf("So luong so le: %d\n", countOdd);
    return 0;
}
