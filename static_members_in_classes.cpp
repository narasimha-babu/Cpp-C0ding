#include <iostream>

using namespace std;

class base{
    public:
        static int a;
};

int base::a = 123456;

int main(){

    base b;
    cout<<b.a<<endl;

return 0;
}