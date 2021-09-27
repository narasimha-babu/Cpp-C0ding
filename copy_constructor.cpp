#include <iostream>

using namespace std;

class Number{

int a;

    public:
    int d;
        Number(){
            a = 10;
            d = 20;
        }
        Number(int num){
            a = num;
        }

         Number(Number &obj){
            a = obj.a;
            cout<<"copy constructor is called"<<endl;
        }
        
        void display();
        void display1();

};

void Number :: display(){
    cout<<"number of this object is "<<a<<endl;
}

void Number :: display1(){
    cout<<"number of this object is "<<d<<endl;
}

int main(){
Number x, y(3), z;
//   z(45);

  x.display();
  y.display();
  z.display();
  Number z2 = z;
   z2.display();
Number *n = new Number;
 n->d = 675;
 n->display1();

 
    return 0;
}