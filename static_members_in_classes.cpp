#include <iostream>

using namespace std;

class base{
    int a,b;
    public:
        static int count;

    
        base(){a = 0; b = 0 ; count++;}

        static int getCount(){ return count;} // static member functions can only access static data members of a class & static 
                                              // and static member functions belong to the class but not the object  
};

int base :: count = 0;

int main(){

    base b1 , b2;
    cout<<b1.count<<endl;
    cout<<b2.count<<endl;
    cout<<b1.getCount()<<endl;
    

    


    

return 0;
}