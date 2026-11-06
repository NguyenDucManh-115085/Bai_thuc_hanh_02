#include <stdio.h>

int main() {
    int n;
    printf("Nhap do dai mang: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Do dai mang khong hop le\n");
        return 1;
    }
    
    float *arr = new float[n];
    for (int i = 0; i < n; i++) {
        printf("So thu  %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    printf("Mang da nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%f ", *(arr + i));
    }
}
