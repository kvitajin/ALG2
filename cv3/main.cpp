#include <iostream>
void g(int*& );

int main() {
    int* a = nullptr;


    std::cout   <<  &a  <<    ": "  << a    <<  std::endl;
    g(a);
    std::cout   <<  &a  <<    ": "  << a    <<  std::endl;


    return 0;
}
void g(int*& const a){
    a= new int;
    std::cout   <<  &a  <<    ": "  << a    <<  std::endl;

}