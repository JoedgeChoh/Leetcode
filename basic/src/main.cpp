#include<iostream>

class A {
  int x,y;
  public:
    A(int a) {x=a; std::cout<<"1\n";}
    A(int a, int b) {x=a; y=b; std::cout<<"2\n";}
    ~A() {std::cout<<"调用析构函数\n"; }
};
// A a1(2);
// void f() {A b(2,3);}
int main() {
  // A a2(4,5);
  A* a3= new A(6);
  // delete a3;
}
