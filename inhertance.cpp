#include <iostream>

using namespace std;

class rectangle{
    int l,b;
    public:
    
        void displayrect(){
            cout<<"area of rectangle is "<< l * b <<endl;
        }
        
};


class cuboid : public rectangle{
 
   int h = 60;
   public:
    cuboid(int le=0, int bre=0, int he=0){
        l = le; bre = b; he = h;
    }
    void displaycub(){
        cout<<"volume of cuboid is "<< l * b *h << endl;
    }
};

int main(){
rectangle r;
cuboid c(6,7,10);
r.displayrect();
c.displaycub();


return 0;
}