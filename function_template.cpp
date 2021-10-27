#include <iostream>

using namespace std;

template <class type>

type sum(type a, type b){

    return a + b;
}


int main(){

    int a= 90, b= 45;
    float c= 9.8, d = 5.6;
    char i='a', j= 'b';
    cout<<sum(i, j)<<endl;

return 0;
}