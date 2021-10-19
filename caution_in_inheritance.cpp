#include <iostream>

using namespace std;

class base1{

 public:
    void func(){cout<<"inside base1"<<endl;}

};

class base2{

    public:
    void func(){cout<<"inside base2"<<endl;}


};

class derived : public base1 , public base2 {

        public:
    void func(){cout<<"inside derived"<<endl;}


};

int main(){

    derived d;

    d.base1::func();
    d.base2::func();
    d.func();

return 0;
}