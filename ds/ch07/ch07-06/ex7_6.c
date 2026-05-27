#include <stdio.h>
#include "heap.h"

int main(void) {
    int i, n, item;
    heapType* heap = createHeap();
    insertMinHeap(heap, 10);
    insertMinHeap(heap, 45;
    insertMinHeap(heap, 19);
    insertMinHeap(heap, 11);
    insertMinHeap(heap, 96);

    printHeap(heap);

    n = heap-> heap_size;
    for (i = 0; i < n; i++) {
        item = deleteMinHeap(heap);
        printf("\n delete : [%d]", item);
    }

    geetchar(); return 0;

}