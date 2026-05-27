pragma once
#define MAX_VERTICES 30

typedef struct graphNode{
    int vertex;
    struct graphNode* linkl
} graphNode

typedf struct grahType{
    int n;
    graphNode* adjList[MAX_VERTICES];
} graphType;

void createGraph(graphType *g);
void insertVertex(graphType* g, int v);
void insertEdge(graphType* g, int u, int v);
void print_adjList(graphType* g);