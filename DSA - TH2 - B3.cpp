#include <stdio.h>
#include <string>

class SV {
    char hoTen[100];
    int maSV; 
    float d1, d2, d3;
    public:
    SV(): maSV(0), d1(0), d2(0), d3(0) {
        hoTen[0] = '\0';
    }
    void nhap();
    void xuat();
};

void SV::nhap() {
    printf("Nhap ho ten: ");
    scanf(" %99[^\n]", hoTen);
    printf("Nhap ma sinh vien: ");
    scanf("%d", &maSV);
    printf("Nhap diem 1: ");
    scanf("%f", &d1);
    printf("Nhap diem 2: ");
    scanf("%f", &d2);
    printf("Nhap diem 3: ");
    scanf("%f", &d3);
}

void SV::xuat() {
    printf("Ho ten: %s\n", hoTen);
    printf("Ma sinh vien: %d\n", maSV);
    printf("Diem 1: %.2f\n", d1);
    printf("Diem 2: %.2f\n", d2);
    printf("Diem 3: %.2f\n", d3);
}

int main() {
    SV *sv;
    int n;
    
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    sv = new SV[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        sv[i].nhap();
    }

    for (int i = 0; i < n; i++) {
        printf("\nThong tin sinh vien thu %d:\n", i + 1);
        sv[i].xuat();
    }
    
    delete[] sv;
    return 0;
}