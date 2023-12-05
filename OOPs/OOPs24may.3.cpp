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
    int a, b, n;
    try
    {
        cin>>a>>b>>n;
        if (n<0)
        throw (n);
        else
        int c[n];
        
        if (n==0)
        throw "Division by zero is impossible.\n";
        else
        cout<<b/a;
    }
    
    catch (int x)
    {
        cout<<"Array index cannot be negative\n";
    }
    catch (const char*msg)
    {
        cout<<msg;
    }
    
    cout<<"I am outside try block.\n";
    cout<<"Further statements can execute normally.\n";
    int c=5, d=7;
    cout<<(c+d);
}