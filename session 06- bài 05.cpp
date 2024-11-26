#include<stdio.h>
int main() {
    int nam,thang,soNgay;
    printf("Nhap nam: ");
    scanf("%d", &nam);
    printf("Nhap thang (1-12): ");
    scanf("%d", &thang);
    if(thang == 2) {
        soNgay = (nam%4==0&&(nam%100!=0||nam%400==0))?29:28;
    } else if(thang==4||thang==6||thang==9||thang==11) {
        soNgay = 30;
    } else {
        soNgay = 31;
    }
    printf("Thang %d cua nam %d co %d ngay., thang, nam, soNgay");
    return 0;
}
