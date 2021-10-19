#include <iostream>

using namespace std;

class car{
    public:
      virtual  void func() =0;
        // pure virtual function  and  object for this class cannot be created , this is an abstract class as it contains atleast one pure virtual function
        void hello(){cout<<"hello"<<endl;}
};


class toyota : public car{
    public:
        void func(){cout<<"inside toyota class"<<endl;}
};

class skoda : public car{
    public:
        void func(){cout<<"inside swift class"<<endl;}
};


int main(){

    car *ptr = new toyota();

    ptr->func();

    ptr = new skoda();

    ptr->func();

return 0;
}