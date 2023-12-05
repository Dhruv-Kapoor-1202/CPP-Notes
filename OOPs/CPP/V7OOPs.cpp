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


    ComplexNum subComplex(ComplexNum c2)
    {
        ComplexNum c3;
        c3.real = real - c2.real;
        c3.imaginary = imaginary - c2.imaginary;
        
        return c3;
    }

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
    
    //c4
    ComplexNum(int a)
    {
        real = a;
        imaginary = a;
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
    ComplexNum c1(5,-9), c2(6), c3;
    c3=c1.subComplex(c2);
    c3.display();
    
    return 0;
}

