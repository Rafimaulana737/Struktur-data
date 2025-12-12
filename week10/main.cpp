#include "bstree.h"

int main(){
    address root = NULL;

    cout<<"binary search tree insert & Traversal"<<endl;

    root=insertNode(root,20);
    insertNode(root,10);
    insertNode(root,35);
    insertNode(root,5);
    insertNode(root,18);
    insertNode(root,40);

    cout<<"hasil inOrder traversal:";
    inOrder(root);
    cout<<endl;

    return 0;
}