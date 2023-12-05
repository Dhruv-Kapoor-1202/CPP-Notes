/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class ComplexNum
{
    int real, imaginary;
    public:


    //c2
    ComplexNum()
    {
        real=0;
        imaginary=0;
    }
    
    //c3
    ComplexNum(int x, int y)
    {
        real = x;
        imaginary = y;
    }

    void read()
    {
        cout<<"\n Enter real part: ";
        cin>>real;
        cout<<"\n Enter imaginary part: ";
        cin>>imaginary;
    }
    
    void display()
    {
        if(imaginary<0)
        cout<<endl<<real<<imaginary <<"i";
        else
        cout<<endl<<real<<"+"<<imaginary<<"i";
        
    }
};

int main()
{
    ComplexNum c1,c2;
    c1.display();
    c1.read();
    c1.display();
    c2.display();
    
    ComplexNum c3(4, 5);
    c3.display();
    
    return 0;
}
