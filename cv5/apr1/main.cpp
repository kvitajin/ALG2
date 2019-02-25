#include <iostream>
#include "list.h"
#include "Graph.h"
#include "Vertex.h"

int main(){
Graph g;
    auto* v1= new Vertex(1,1);
    auto* v2= new Vertex(2,2);
    auto* v3= new Vertex(3,3);
    auto* v4= new Vertex(4,4);
    auto* v5= new Vertex(5,5);





    g.insert(v1);

    g.insert(v2);

    auto* siblings= new int[4];
    g.insert(v3, siblings, 2);

    siblings[0]=3;
    g.insert(v4, siblings, 1);
    siblings[0]=2;
    siblings[1]=3;




    delete siblings;


    return 0;
}