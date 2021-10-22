#include <iostream>

using namespace std;

int main(){

    int a,b;
    cout<<"Enter a and b values :";
    cin>>a>>b;

    try{
        if(a == b){
        throw a;
        }
    }
    catch(int x){
        cout<<"values of both the variables are equal , value is "<<a<<endl;
    }

    cout<<"program finished"<<endl;

return 0;
}