#include <iostream>

using namespace std;

int main(){

int a=4;
int   *b= &a;
int **c =&b;

cout<<"*b :"<<*b<<endl;

cout<<"b :"<<b<<endl;
cout<<"c :"<<c<<endl;
cout<<"*c :"<<*c<<endl;
cout<<"**c :"<<**c<<endl;

return 0;
}