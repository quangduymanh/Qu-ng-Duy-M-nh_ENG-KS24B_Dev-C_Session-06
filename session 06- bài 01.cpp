#include<stdio.h>

int main() {
    int a;               
    int number = 0;      
    int i;               
    printf("Moi ban nhap 5 so nguyen:\n");
    for(i = 0; i < 5; i++) {  
        printf("Nhap so thu %d: ", i + 1);  
        scanf("%d", &a);  
        if(a % 2 != 0) {   
            number += a;    
        }
    }
    printf("Tong so le cua cac so ban nhap la: %d\n", number);

    return 0;
}
