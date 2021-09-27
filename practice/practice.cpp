#include <iostream>

using namespace std;

int recursive_sum(int x){

     if (x <= 1)
        return x;
    
     
   return (x + recursive_sum(x-1));

}

int main(){

    int n;
    cout<<"Enter an positive integer: ";
    cin>>n;

   

    cout<<"Sum = " << recursive_sum(n) << endl;
    
    return 0;
}