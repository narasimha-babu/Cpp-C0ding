#include <iostream>

using namespace std;

class base{
    public:
        void fun1(){cout<<"fun1() of base class"<<endl;}
};

class derived : public base{
    public:
        void fun2(){cout<<"fun2() of derived"<<endl;}
};

int main(){

base b;
derived *p = &b;



p->fun1();
p->fun2();

return 0;
}