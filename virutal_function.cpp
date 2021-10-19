#include <iostream>

using namespace std;


class shape{
 public:
    virtual void show(){cout<<"show of shape"<<endl;}

};

class rectangle:public shape{
public:
    void show(){cout<<"show of rectangle"<<endl;}
};

class square:public shape{
    public:
        void show(){cout<<"show of square"<<endl;}
};


int main() {

shape *ptr = new rectangle();
ptr->show();
ptr = new square();
ptr->show();
return 0;

}