#include <iostream>
#include "namespace_one.h"
using namespace std;

namespace second{
    void fun(){

std::cout<<"second namespace"<<endl;
    }
};
int main(){

    first::fun();
return 0;
}