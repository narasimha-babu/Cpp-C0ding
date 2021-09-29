#include <iostream>

using namespace std;
class complex{
int real,img;

public:
    complex(int, int );
   friend ostream & operator<<(ostream &o,complex x);
    
};

complex :: complex(int r=0, int i=0){
    real = r; img = i;
}

ostream & operator<<(ostream &o,complex x){
  o<<x.real<<" + i"<<x.img<<endl;
  return o;
}
int main(){
complex c1(34,56);

cout<<c1;              //
operator<<(cout,c1);   //  cout<< is similar to operator<< from now


return 0;
}