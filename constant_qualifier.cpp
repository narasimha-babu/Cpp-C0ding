// usage of const keyword in cpp

#include <iostream>


using namespace std;

int main(){

  const  int x = 10;
  int y = 20;
  int z = 34;
        
        // cout<<x;

   const int *ptr = &y; 
   //ptr pointing to integer constant
//    y++;
//    (*ptr)++;
//    cout<<y;

   int const *ptr2 = &y;      // int const *ptr and onst int *ptr are same
   //ptr2 pointing to constant integer
//    (*ptr2)++;
//    cout<<y;

    int *const ptr3 = &y;
//constant pointer of type integer , pointer itself is constant so the pointer cannot point to more than one variable
    // ptr3 = &z;
    // ++(*ptr3);
    // cout<<*ptr3<<endl;

    const int *const ptr4 = &y;
    //cannot point to another variable and the variable y cannot be modified through the pointer
    ++(*ptr4);
    cout<<y;

return 0;
}