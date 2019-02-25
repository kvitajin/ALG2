//
// Created by kvitajin on 26.3.18.
//

#include "list.h"
#include "Vertex.h"

#ifndef APR1_GRAPH_H
#define APR1_GRAPH_H
class Graph{
    List verticies;
public:
    Graph();
    void insert(Vertex*);
    void insert(Vertex*, int*, int);
};

#endif //APR1_GRAPH_H
