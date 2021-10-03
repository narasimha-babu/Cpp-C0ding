#include <iostream>

using namespace std;

class parent{
  int x;
  public:
    parent(){cout<<"default of parent"<<endl;}
    parent(int y){cout<<"parameterized of parent "<<y<<endl;}
};

class child : public parent{
  int a;
  public:
    child(){cout<<"default of child"<<endl;}
    child(int y){cout<<"parameterized of child"<<endl;}
    child(int a, int b) : parent(b){
        cout<<"passing b to the parent class"<<endl;
    }
};

int main(){

child ch(10 , 30);

return 0;
}
