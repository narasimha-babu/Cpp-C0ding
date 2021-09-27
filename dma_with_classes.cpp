#include<iostream>
using namespace std;

class example{
    int counter;

    public:
    void initcounter(void) { counter = 0; }
    void increment(void);
};

void example ::increment(void){
    counter++;
    cout<<counter<<endl;
}


int main()
{
    example ex;

    ex.increment();
    ex.increment();
    ex.increment();
    ex.increment();
    ex.increment();
    ex.increment();

    return 0;
}