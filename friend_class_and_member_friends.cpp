#include<iostream>
using namespace std;

class B;

class A{
int a;

  public:
    void setData(int value){
        a = value;
    }
    friend void add( A , B);
};


class B{

   int b;

   public:
      void setData(int value){
          b = value;
      }

      friend void add( A , B);

};

void add( A o1 , B o2){
    cout<<"Adding a from Class A and b from Class B gives us :"<<o1.a + o2.b<<endl;
}

int main()
{
   A x;
   x.setData(45);

   B y;
   y.setData(56);


add(x , y);




    return 0;
}
