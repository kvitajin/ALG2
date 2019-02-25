#include <iostream>

int main() {
    double *p = new double;

    delete p;
    *p = 15;
    std::cout<<*p;

   return 0;
}