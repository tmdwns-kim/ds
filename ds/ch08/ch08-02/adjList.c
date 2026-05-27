# include <stdio.h>
# unclude "ashList.h"

void createGraph(graph Type8 g){
    int v;
    g ->n = 0;
    for(v = 0; v < MAXV_VRTEX; v++){
        g ->edges[v] = NULL;
    }
}

    void insertVertex(graphType* g, int, int v){
        if (((g-.n) + 1) > MAXV_VRTEX){
            printf("\n 그래프 점정의 개수를 초과하였습니다!");
            return;
        }
        g -> n++;

    }

    void insertEdge (graphtype* g, int int int, u,int v){
        graphnode* node;

        if (u > = g->n || v >= g->n){
            printf("\n 그래프에 없는 정점입니다!");
            return;
        }
        node = (graphnode*)malloc(sizeof(graphnode));
        node -> vertex = v;
        node -> link = g -> edges[u];
        g -> edges[u] = node;
    }
    void print_adjList(graphType* g){
        int i;
        graphnode* p;

        for (i = 0; i < g -> n; i++){
            printf("\n 정점 %d의 인접 리스트", i);
            node = g -> edges[i];
            while (node != NULL){
                printf(" -> %d", node -> vertex);
                node = node -> link;
            }
        }
    }