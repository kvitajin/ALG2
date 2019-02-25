//
// Created by kvitajin on 30.4.18.
//

#include "BSTree.h"

void BSTree::insert(int key, Node*& root) {
    if(root== nullptr){
        root=new Node(key);
        return;
    }
    if(root->key==key) return;
    if(root->key>key){
       insert(key, root->left);
    }
    if(root->key<key){
        insert(key, root->rigth);
    }
}
void BSTree::insert(int key) {
    this->insert(key, this->root);
}