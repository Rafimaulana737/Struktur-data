// graph_edge.cpp
#include "graph.h"
#include <iostream>
using namespace std;

adrNode findNode(Graph G, infoGraph X) {
    adrNode P = G.first;
    while (P != NULL) {
        if (P->info == X) return P;
        P = P->next;
    }
    return NULL;
}

void connectNode(Graph &G, infoGraph start, infoGraph end) {
    adrNode pStart = findNode(G, start);
    adrNode pEnd = findNode(G, end);

    if (pStart != NULL && pEnd != NULL) {
        adrEdge newEdge = new ElmEdge;
        newEdge->node = pEnd;
        newEdge->next = pStart->firstEdge; // Insert First
        pStart->firstEdge = newEdge;
    }
} // ← connectNode DITUTUP DI SINI

//untuk unguided 2
void printDFS(Graph G, adrNode N) {
    if (N == NULL || N->visited) return;

    cout << N->info << " ";
    N->visited = true;

    adrEdge E = N->firstEdge;
    while (E != NULL) {
        printDFS(G, E->node);
        E = E->next;
    }
}

//  untuk UNGUIDED 3 
void printBFS(Graph G, adrNode start) {
    if (start == NULL) return;

    adrNode queue[100];
    int front = 0, rear = 0;

    start->visited = true;
    queue[rear++] = start;

    while (front < rear) {
        adrNode P = queue[front++];
        cout << P->info << " ";

        adrEdge E = P->firstEdge;
        while (E != NULL) {
            if (!E->node->visited) {
                E->node->visited = true;
                queue[rear++] = E->node;
            }
            E = E->next;
        }
    }
}
