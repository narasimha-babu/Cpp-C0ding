#include <iostream>

using namespace std;



class rectangle{
   int length, breadth;
   public: 
    void setLength(int x){
        length = x;
    }
    void setBreadth(int y){
        breadth = y;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
};
class cuboid : public rectangle{
    int height;
    public: 
        cuboid(int l=0, int b=0, int h=0){
            height = h;
                setLength(l);
                setBreadth(b);
        }
        int volume(){
            return height * getLength() * getBreadth(); 
        }

};

int main(){

    cuboid c(10,8,4);
    
   int volume = c.volume();
   cout<< volume<<endl;

return 0;
}