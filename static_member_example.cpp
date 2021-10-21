#include <iostream>
#include <string>

using namespace std;

class Student{

    int roll;
    string n;
    public:
    static int admNo;

        Student(string name){
            admNo++;
            roll = admNo;
            n = name;
        }

        void display(){
            cout<<"Name and Roll Number of the Student is "<<n<<" & "<<roll<<endl;
        }
};

int Student :: admNo = 0;

int main(){



   Student s1("narasimha babu"), s2("raveena") , s3("dhivyansh");

    s1.display();
    s2.display();
    s3.display();

    cout<<"Number of Admissions is "<<Student::admNo<<endl;

return 0;
}