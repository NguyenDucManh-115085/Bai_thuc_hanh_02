#include <stdio.h>
#include <string>
#include <stdlib.h>

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
