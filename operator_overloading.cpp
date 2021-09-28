#include <iostream>

using namespace std;

class complex
{
    int real, imag;

public:
    complex(int i = 0, int r = 0)
    {
        real = i;
        imag = r;
    }
    void display();

   complex operator-(complex x)
    {
        complex temp;
        temp.real = real + x.real;
        temp.imag = imag + x.imag;
      
        return temp;
    }
};

void complex ::display()
{
    cout << real << " + i" << imag << endl;
}

int main()
{

    complex c1(12, 67);
    complex c2(34,56);
    complex c3;
    
    // c3 = c1 + c2;

    c3 = c1 - c2;

    // c3 = add(c2);

    c3.display();

    return 0;
}