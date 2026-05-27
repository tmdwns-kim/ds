#include <stdio.h>
#include"adjList.h"
#include "stackL.h"
#include "DFS.h"

void DFS_adjList(graphType* G, int v) {
    graphType* w;
    top =NULL;
    push(v);
    g ->visted[v] =  TRUE;
    printf("%d ", v+ 65);

    while (!istackEmpty()){
        w = g -> adjList_H[V];
        while(w) {
            if (!g -> visited[w -> vertex]) {
                push(w -> vertex);
                g -> visited[w -> vertex] = TRUE;
                printf("%d ", w -> vertex + 65);
                v = w -> vertex;
                w = g -> adjList_H[v]; 
            }
            else w = w -> link;
        }
    }