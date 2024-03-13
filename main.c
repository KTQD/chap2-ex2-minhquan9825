#include <stdio.h>

int main() {
    float cao, rong, chuvi;

    printf("Nhap chieu cao cua chu vi : ");
    scanf("%f", &cao);

    printf("Nhap chieu rong cua chu vi: ");
    scanf("%f", &rong);

    chuvi = 2 * (cao  + rong);
    
    printf("Chu vi cua hinh chu nhat la: %.2f\n", chuvi);

    return 0;
}

