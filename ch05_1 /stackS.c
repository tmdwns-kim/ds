#include <stdio.h>
#include "stackS.h"

int top = -1;

int isSackEmpty(){
    if (top == -1) return 1;
    else return 0;
}

int isStackFull(){
    if(isStackFull()){
        printf("\n\n stack is FULL! \n");
        return ;
    }
    else stack[++top] = item;

}

element pop(){
    if(isSackEmpty()){
        printf("\n\n stack is EMPTY! \n");
        return ;
    }
    else return stack[top--];
}

element peek(){
    if(isSackEmpty()){
        printf("\n\n stack is EMPTY! \n");
        return ;
    }
    else return stack[top];
}

void printStack(){
    int i;
    printf("\n STACK [ ");
    for(i=0; i<=top; i++){
        printf("%d ", stack[i]);
    }
    printf("] \n");
}
