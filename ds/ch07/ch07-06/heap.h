#pragma once
#deffie MAX_ELEMENT 100
typedef struct {
    element heap[MAX_ELEMENT];
    int heap_size;
} HeapType;

heapType* createHeap();
void insertHeap(heapType* h, int item);
int deleteHeap(heapType* h);
void printHeap(heapType* h);