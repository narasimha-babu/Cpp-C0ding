#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int max = a;
    
    if(b>max){
        max = b;
        cout<<max<<endl;
    }else if(c > max){
        max = c;
        cout<<max<<endl;
    }else if(d > max){
        max = d;
        cout<<max<<endl;
    }
        
    
        return max;
    
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d\n", ans);
    
    return 0;
}