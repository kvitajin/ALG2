#include <iostream>

class A{
public:
    virtual void M(){std::cout<<"trida A, metoda M"<<std::endl;}
};
class B: public A{
public:
    virtual void M(){std::cout<<"trida b, metoda M"<<std::endl;}
};





/*
class A{
public:
    virtual int M1(int);
    virtual int M2(int);
};



class B{
private:
    int i;
    int j;
public:
    B(int);
    B(int, int);
};

B::B(int i) {
    this->i=i;
}
B::B(int i, int j) {
    this->i=i;
    this->j=j;
}*/

int main() {
    A *aptr=new A();
    B *bptr=new B();
    aptr->M();
    bptr->M();
    return 0;
}