#include <iostream>

using namespace std;

class square{

    public: 
        int side;
        int area(){
            return (side * side);
        }
};

int main(){

square x;
square *p;
p = &x;
x.side = 10;
p->side = 10;
cout<<"area of the square is "<<p->area()<<endl;


return 0;
}