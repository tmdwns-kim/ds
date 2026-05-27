# include <stdio.h>
#include "adjList.h"

void creatGraph(graphType* g){
    int v;
    g ->n = 0;
    for(v = 0; v < MAX_VERTICES; v++){
        g ->adjList[v] = NULL;
        g->visited[v] = FALSE;
    }
}

void insertVertex(graphType* g, int v){
    if (((g->n) + 1) > MAX_VERTICES){
        printf("\n 그래프 정점의 개수를 초과하였습니다!");
        return;
    }
    g -> n++;
} 

void insertEdge(graphType* g, int u, int v){
    graphNode* node;

    if (u >= g->n || v >= g->n){
        printf("\n 그래프에 없는 정점입니다!");
        return;
    }
    node = (graphNode*)malloc(sizeof(graphNode));
    node -> vertex = v;
    node -> link = g -> adjList[u];
    g -> adjList[u] = node;
}

void print_adjList(graphThype* g){
    int i;
    graphNode* node;

    for (i = 0; i < g -> n; i++){
        printf("\n 정점 %d의 인접 리스트", i);
        node = g -> adjList[i];
        while (node != NULL){
            printf(" -> %d", node -> vertex);
            node = node -> link;
        }
    }
}