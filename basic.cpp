#include <iostream>
#include <iomanip>

void hello(void);

using namespace std;

int main(){

int n1 , n2;

cout<<"enter n1 and n2"<<endl;

cin>>n1>>n2;

cout<<n1<<setw(2)<<n2<<endl;

hello();

return 0;
}

void hello(){
    cout<<"hello"<<endl;
}
