#include <iostream>

using namespace std;

class base{
public:
    void display(){cout<<"fun of base"<<endl;}
};

class derived : public base{
public: 
    void display(){cout<<"fun of derived"<<endl;}
};

int main(){
derived d;
d.display();
d.base::display();
return 0;
}