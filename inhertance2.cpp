#include <iostream>

using namespace std;

class base{
  int a;
  public:
    void display(){
        cout<<"base class "<< a << endl;
    }
};

class derived : public base{
  public:
    void show(){
        cout<<"derived class"<<endl;
    }
};
int main(){

derived d;
d.display();
d.show();

return 0;
}