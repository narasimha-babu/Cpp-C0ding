#include <iostream>

using namespace std;

class num{


int a;

 public:
    num(){}
    num(int n):a{n} {
        cout<<"this is a parameterized constructor"<<endl;
        cout<<"this object has the value "<< n <<endl;
    }
    ~num(){cout<<"this is a destructor"<<endl;}
};

int main(){
num x, y(456);


}