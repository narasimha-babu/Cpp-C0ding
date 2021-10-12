#include <iostream>

using namespace std;

int main(){
int a,b,c,d;
a=12;b=67;c=78;d=46;
int *arr[] = {a,b,c,d};
// int *ptr = &arr[0];
// cout<<sizeof(ptr[8]);
cout<<*arr[3];
return 0;
}