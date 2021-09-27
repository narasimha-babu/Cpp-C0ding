#include<iostream>
using namespace std;

int main()
{
    int n1=0,n2=1;

    int nxt=0;

    for(int i=0; i<10; i++){
      cout<<nxt<<" ";
      nxt = n1 + n2;
      n1 = n2;
      n2 = nxt;
    }
    return 0
}
