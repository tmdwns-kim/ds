#pragma once
typedef int element;

typedef struct QNode {
    element data;
    struct QNode* link;
} QNode;

typedef struct {
    QNode* front;
    QNode* rear;
} LQueueType;

LQueueType* createLinkedQueue();
int isLQEmpty(LQueueType* Q);
void enLQueue(LQueueType* LQ, element item);
element deLQueue(LQueueType* LQ);
element peekLQ(LQueueType* LQ);
void printLQ(LQueueType* LQ);