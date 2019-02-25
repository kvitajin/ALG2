//
// Created by kvitajin on 26.3.18.
//
#include <iostream>
#include "Vertex.h"

Vertex::Vertex(int id, int data) {
    this->id=id;
    this->data=data;

    this->next= nullptr;
    this->prev= nullptr;

    this->sibCount=10;

    this->siblings=new Vertex*[sibCount];

    for (int i = 0; i < this->sibCount; ++i) {
        this->siblings[i]= nullptr;
    }
}

Vertex::~Vertex(){
    delete [] this->siblings;
    this->siblings= nullptr;
}

void Vertex::insertSibling(Vertex* sibling){
    int i=0;
    while(i<this->sibCount && this->siblings[i]!= nullptr){++i;}

    if (i>=this->sibCount){
        std::cout   <<  "no more siblings"  <<  std::endl;
        return;
    }

    this->siblings[i]=sibling;

}
