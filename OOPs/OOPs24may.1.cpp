/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a=0, b=5;
    
    try
    {
        if(a==0)
        throw"Division by zero ";
        else
        cout<<b/a;
    }
    catch(const char*msg1)
    {
        cout<<msg1;
    }
    catch(int x)
    {
        cout<<"x ="<<x;
    }
    
}