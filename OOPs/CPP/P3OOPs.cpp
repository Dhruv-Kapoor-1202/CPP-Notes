/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Demo
{
    int x;
    public:
    
    Demo(int p=0)
    {
        x=p;
    }
    
    ~Demo()
    {
        cout<<"Object is deleted";
    }
};


int main()
{
    Demo obj;
}