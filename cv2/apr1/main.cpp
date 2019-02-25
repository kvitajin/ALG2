#include <iostream>
#include <cfloat>
#include <iomanip>

void    push    (double*, int, int&, double);
double  pop     (double*, int&);


int main() {

    const int capacity=3;
    auto* glock = new double [capacity];
    int top = -1;    //bude ukazovat mimo pole a nesmim dovolit, abych tam koukl
    push(glock, capacity, top, 1.123);
    push(glock, capacity, top, 2.0);
    push(glock, capacity, top, 3.0);
    push(glock, capacity, top, 4.0);

    std::cout << std::setprecision(3)<<pop(glock, top)    <<  std::endl;
    std::cout << pop(glock, top)    <<  std::endl;
    std::cout << pop(glock, top)    <<  std::endl;
    std::cout << pop(glock, top)    <<  std::endl;



    delete[] glock;
    glock= nullptr;
    return 0;
}

void push(double* glock, int capacity, int &top, double value){

    if(top<capacity-1){
        glock[++top]=value;
    } else {
        std::cout   <<  "stack is full bro."    <<  std::endl;
    }
}

double pop(double* glock, int& top){
    if(top>=0) {
        return (glock[top--]);
    }
    std::cout   <<  "stack is empty"    <<  std::endl;
    return (DBL_MAX);
}
