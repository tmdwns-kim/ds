#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef int element;

typedef struct {
    element data[MAX_SIZE];
    int top;
} Stack;

static Stack s = { .top = -1 };

static int isEmpty(void) { return s.top == -1; }
static int isFull(void)  { return s.top == MAX_SIZE - 1; }

void printStack(void) {
    printf("\n Stack | ");
    for (int i = 0; i <= s.top; i++)
        printf("%d ", s.data[i]);
    printf(" | top=%d\n", s.top);
}

void push(element item) {
    if (isFull()) { fprintf(stderr, "[Error] Stack is full.\n"); return; }
    s.data[++s.top] = item;
}

element pop(void) {
    if (isEmpty()) { fprintf(stderr, "[Error] Stack is empty.\n"); exit(EXIT_FAILURE); }
    return s.data[s.top--];
}

element peek(void) {
    if (isEmpty()) { fprintf(stderr, "[Error] Stack is empty.\n"); exit(EXIT_FAILURE); }
    return s.data[s.top];
}

int main(void) {
    push(10);
    push(20);
    push(30);
    printStack();
    printf("peek: %d\n", peek());
    printf("pop:  %d\n", pop());
    printStack();
    return 0;
}
