//
// Created by kvitajin on 26.3.18.
//
#include "Graph.h"
void Graph::insert(Vertex *vertex) {
    this->verticies.insertItem(vertex);
    return;
}
void Graph::insert(Vertex *vertex, int *siblings, int count) {
    this->insert(vertex);
    for (int i = 0; i < count; ++i) {
        Vertex* sibling=this->verticies.findItem(siblings[i]);
        if (sibling != nullptr){
            vertex->insertSibling(sibling);
            if (vertex!=sibling){                  //kdyby byla smycka, tak abych ji nezavedl dvakrat
                sibling->insertSibling(vertex);

            }
        }
    }

}