#include<iostream>
using namespace std;


class Complex{
  int real,img;
  public:
    Complex(int r=0, int i=0){
      real =r; img = i;
    }

    Complex add(complex x, complex y){
      Complex t;
      t.real = x.real + y.real;
      t.img = x.img + y.img;

      return t;
    }

    void show(){
      cout<<real<<" + i"<<img<<endl;
    }
};


int main()
{
  Complex c1(9,6) , c2(5,7) , c3,c4;

  c3 = c4.add(c1,c2);

c3.show();

    return 0;
}