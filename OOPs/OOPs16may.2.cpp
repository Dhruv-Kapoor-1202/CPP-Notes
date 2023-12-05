/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Base
{
    public:
    /*Base()
    {
        cout<<"\nI am in base class";
    }*/
};

class Derived : public Base
{
    public:
    Derived()
    {
        cout<<"\nI am in derived class";
    }
    Derived(int c)
    {
        cout<<"\nI am in parameterised constructor of derived class";
    }
    
};
int main()
{
    Derived obj;
    Derived obj1(5);
}