//
// Created by kvitajin on 26.3.18.
//
#ifndef APR1_VERTEX_H
#define APR1_VERTEX_H
class Vertex{
    int data;
    int id;

    int sibCount;

    Vertex* next;
    Vertex* prev;

    Vertex** siblings;

public:
    Vertex(int, int);
    ~Vertex();
    void    setData (int data)      {this->data=data;}
    int     getData ()              {return (this->data);}

    void    setId   (int id)        {this->id=id;}
    int     getId   ()              {return(this->id);}
    void    setNext (Vertex* next)  {this->next=next;}
    Vertex* getNext ()              {return(this->next);}
    void    setPrev (Vertex* prev)  {this->prev=prev;}
    Vertex* getPrev ()              {return(this->prev);}

    void insertSibling(Vertex* sibling);
};

#endif //APR1_VERTEX_H
