#include <iostream>

using namespace std;

class complex{
    int real,img;


    public: 
       complex(int r=0, int i=0){
           real = r; img = i;
       }
        friend complex operator+(complex x, complex y);

        void display();
};

  void complex :: display(){
      cout<<"sum of the complex numbers c1 and c2 is "<<real<<" + i"<<img<<endl;
  }

complex operator+(complex x, complex y){
        complex t;
        t.real = x.real + y.real;
        t.img = x.img + y.img;

        return t;

}

int main(){


complex c1(12,34),c2(67,8),c3;

c3 = c1 + c2;

c3.display();


return 0;
}