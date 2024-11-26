#include<stdio.h>
int main() {
    int matKhauDung = 123456;  
    int matKhauNhap;           
    printf("Nhap mat khau: ");
    scanf("%d", &matKhauNhap); 
    if(matKhauNhap == matKhauDung) {
        printf("Mat khau dung!\n");
    } else {
        printf("Mat khau sai!\n");
    }
    return 0;
}
