//
// Created by kvitajin on 30.4.18.
//

#ifndef A8PR1_BSTREE_H
#define A8PR1_BSTREE_H

class BSTree{
    class Node{
    public:
        int key;
        Node* left= nullptr;
        Node* rigth= nullptr;
        Node(int key){this->key=key;}
    };

    Node* root=nullptr;
    void insert(int, Node*&);
public:
    void insert(int);

};




#endif //A8PR1_BSTREE_H
