#include <iostream>

using namespace std;

int main(){
    int a=56;
    int &b = a; // b refers to a;

    cout<<b<<endl;

    return 0;

}