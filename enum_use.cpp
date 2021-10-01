#include <iostream>

using namespace std;

enum isage{mo=9,tu=-1,we,th,fr=9,sa};

enum usage{mon=9,tue=-1,wed,thu,fri=9,sat,sun};
int main(){

isage i;
i = mo;
int x = 9;
usage u;
u = mon;
// if(u == x){
//     cout<<"it uses int for comparison"<<endl;
// }

cout<<typeid(u).name()<<endl;

return 0;


}
