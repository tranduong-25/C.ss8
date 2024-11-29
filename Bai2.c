#include <stdio.h>

int main() {
    int arr[] = {12, 45, 78, 23, 56, 89, 34};  
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, i;

    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Vị trí phần tử trong mảng là %d\n", i);
            return 0;  
        }
    }

    printf("Phan tu khong ton tai trong mang.\n");  
    return 0;
}
