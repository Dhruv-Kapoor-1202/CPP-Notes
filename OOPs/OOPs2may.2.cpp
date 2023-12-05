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

    ComplexNum operator - (ComplexNum &C)
    {
        ComplexNum C3;
        cout<<C.real<<C.imaginary;
        C3.real = this->real - C.real;
        C3.imaginary = this->imaginary - C.imaginary;
    
        return C3;
    }
};
int main()
{
    ComplexNum C1,C2;
    
    C1.read();
    C2.read();
    
    
    ComplexNum res;
    res=C1 - C2;
    res.display();
}