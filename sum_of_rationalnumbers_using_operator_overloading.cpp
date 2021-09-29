//sum of rational numbers using operator overloading + and <<
#include <iostream>

using namespace std;

class rational{
  int p,q;
  public:
    rational(int x=0, int y=0){
        p = x; q =y;
    }
    friend rational operator+(rational x, rational y);
   friend ostream & operator<<(ostream &o, rational &c);
};

rational operator+(rational x, rational y){
   rational t;
   t.q = (x.q) * (y.q);
   t.p = (x.p) * (y.q)  +  (x.q) * (y.p);

   return t;
}

ostream & operator<<(ostream &o, rational &c){
    o<<c.p <<"/"<<c.q<<endl;

    return o;
}

int main(){
rational c1(4,5),c2(6,7),c3;

c3 = c1 + c2;

cout<<c3;

return 0;
}