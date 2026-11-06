#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char hoTen[100];
    int maSV;
    float d1, d2, d3;
} SV;

typedef struct Node {
    SV data;
    struct Node* next;
} Node;

typedef struct {
    Node* head;
    Node* tail;
} LinkedList;

void DS(LinkedList* list) {
    list->head = NULL;
    list->tail = NULL;
}

SV nhap() {
    SV sv;
    printf("Nhap ho ten: ");
    scanf(" %99[^\n]", sv.hoTen);
    printf("Nhap ma sinh vien: ");
    scanf("%d", &sv.maSV);
    printf("Nhap diem 1: ");
    scanf("%f", &sv.d1);
    printf("Nhap diem 2: ");
    scanf("%f", &sv.d2);
    printf("Nhap diem 3: ");
    scanf("%f", &sv.d3);
    return sv;
}

Node* taoNode(SV sv) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = sv;
    newNode->next = NULL;
    return newNode;
}

void themNode(LinkedList* list, SV sv) {
    Node* newNode = taoNode(sv);
    if (list->head == NULL) {
        list->head = newNode;
        list->tail = newNode;
    } else {
        list->tail->next = newNode;
        list->tail = newNode;
    }
}

void themSV(LinkedList* list, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        SV sv = nhap();
        themNode(list, sv);
    }
}


void inDS(const LinkedList* list) {
    Node* current = list->head;
    while (current != NULL) {
        printf("Ho ten: %s\n", current->data.hoTen);
        printf("Ma sinh vien: %d\n", current->data.maSV);
        printf("Diem 1: %.2f\n", current->data.d1);
        printf("Diem 2: %.2f\n", current->data.d2);
        printf("Diem 3: %.2f\n", current->data.d3);
        printf("\n");
        current = current->next;
    }
}

int main() {
    LinkedList list;
    DS(&list);

    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    
    themSV(&list, n);
    printf("\nDanh sach sinh vien:\n");
    inDS(&list);

    return 0;
}