#pragma once
#define MAX_VERTICES 30
#define FALSE 0
#define TRUE 1

typedef struct graphNode{
    int vertex;
    struct graphNode* link;
} graphNode;    

typedef struct graphType{
    int n;
    graphNode* adjList_H[MAX_VERTICES];
    int visited[MAX_VERTICES];
} graphType;

void createGraph(graphType *g);
void insertVertex(graphType* g, int v);
void insertEdge(graphType* g, int u, int v);
void print_adjList(graphType* g);