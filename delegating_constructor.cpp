#include <iostream>


using namespace std;

class lemon{
int a,x;
float y;
char s;
string f;


 public:
       lemon(){cout<<"this is a default constructor"<<endl;}
        lemon(int val , float value);
        lemon(char m , string n);
};


 lemon :: lemon(char m, string n) :lemon{s,f} {
    cout<<"this is a delegating constructor"<<endl;
}


int main(){


return 0;
}