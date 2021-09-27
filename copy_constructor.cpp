#include <iostream>

using namespace std;

class Number{

int a;

    public:
        Number(){
            a = 10;
        }
        Number(int num){
            a = num;
        }

         Number(Number &obj){
            a = obj.a;
            cout<<"copy constructor is called"<<endl;
        }
        
        void display();
};

void Number :: display(){
    cout<<"number of this object is "<<a<<endl;
}

int main(){
Number x, y(3), z(45);
//   z(45);

  x.display();
  y.display();
  z.display();
  Number z2 = z;
   z2.display();
   
    return 0;
}