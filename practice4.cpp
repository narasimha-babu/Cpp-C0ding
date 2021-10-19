#include <iostream>

using namespace std;

class base{

    private: int b = 10;

    protected: int c= 90;
    public: int a= 45;
    
        friend void frnd();
        void display(){
           a = 10;
           b = 456;
           c = 23465;
            cout<<a<<endl;
            cout<<b<<endl;

            cout<<c<<endl;

        }

};

void frnd(){
    base b;
    b.a = 12;
    b.b = 456;
    b.c = 34656;
    cout<<b.a<<endl;
    cout<<b.b<<endl;

    cout<<b.c<<endl;


}

int main(){

// frnd();

base b;

b.display();

return 0;
}