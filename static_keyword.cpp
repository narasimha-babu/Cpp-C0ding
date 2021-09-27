#include <iostream>
#include <iomanip>

using namespace std;

void hello (void){
    static int count=0;
    count++;
    cout<<count<<endl;
}



int main(){

hello();
hello();

hello();
hello();
hello();


return 0;
}

