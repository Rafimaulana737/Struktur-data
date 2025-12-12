#ifndef BSTREE_H
#include <iostream>

using namespace std;

typedef int infotype;
typedef struct tNode* address;

struct tNode {
    infotype info;
    address left;
    address right;
};

//fungsi alokasi node baru
address newNode(infotype x);

//fungsi insert node ke dalam binary search tree
address insertNode(address root, infotype x);

//prosedur traversal inorder
void inOrder(address root);

#endif