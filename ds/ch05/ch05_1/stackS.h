
#ifndef STACKS_H
#define STACKS_H

#define STACK_SIZE 100

typedef int element;

extern int top;
extern element stack[STACK_SIZE];

int isStackEmpty();
int isStackFull();
void push(element item);
int pop(element *out);   
element peek();
void printStack();

#endif