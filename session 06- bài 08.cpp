#include<stdio.h>
int main() {
    float tienBanDau, laiSuat, tienLai, tienNhanDuoc;
    int soThang;
    printf("Tien ban dau: ");
    scanf("%f", &tienBanDau);
    printf("Lai suat: ");
    scanf("%f", &laiSuat);
    printf("So thang gui: ");
    scanf("%d", &soThang);
    tienNhanDuoc = tienBanDau;
    for(int i = 0; i < soThang; i++) {
        tienNhanDuoc += tienNhanDuoc * laiSuat / 100;
    }
    tienLai = tienNhanDuoc - tienBanDau;
    printf("Tien lai: %.3f\n", tienLai);
    printf("Tien nhan duoc: %.3f\n", tienNhanDuoc);
    return 0;
}
