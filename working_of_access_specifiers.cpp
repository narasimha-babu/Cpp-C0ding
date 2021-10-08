#include <iostream>

using namespace std;
class parent{
public:
    int a;
private:
    int b;
protected:
    int c;


};

class child : parent{
    // all members of parent are available here but
    // derived class can access protected and public members of parent class
}
int main(){

child ch;

// object of class can access only public but not protected and private even though every data member of
// class is available here


return 0;
}