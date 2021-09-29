#include<iostream>
using namespace std;


class Complex{
  private:
     int real,img;

  public:
    Complex(int r=0, int i=0){
      real =r; img = i;
    }

    friend Complex add(Complex x, Complex y);

    void show(){
      cout<<real<<" + i"<<img<<endl;
    }
};

   Complex add(Complex x, Complex y){
      Complex t;
      t.real = x.real + y.real;
      t.img = x.img + y.img;

      return t;
    }


int main()
{
  Complex c1(9,6) , c2(5,7) , c3;

  c3 = add(c1,c2);

c3.show();

    return 0;
}