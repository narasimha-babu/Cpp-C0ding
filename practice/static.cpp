#include<iostream>

using namespace std;

int count(){

 static int c = 0;
    c = c+1;

    return c;
}
int main()
{


 cout<<count()<<endl;
 cout<<count()<<endl;
 cout<<count()<<endl;


    return 0;
}