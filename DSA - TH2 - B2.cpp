#include <stdio.h>

int main() {
    int r, c;
    printf("Nhap so hang: ");
    scanf("%d", &r);
    printf("Nhap so cot: ");
    scanf("%d", &c);

    if (r <= 0 || c <= 0) {
        printf("So hang hoac so cot khong hop le\n");
        return 1;
    }

    float **arr = new float*[r];
    for (int i = 0; i < r; i++) {
        arr[i] = new float[c];
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Nhap phan tu [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &arr[i][j]);
        }
    }

    printf("Mang da nhap:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < r; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}