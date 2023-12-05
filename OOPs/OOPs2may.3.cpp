/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class A
{
    int count;
    public:
    void display()
    {
        cout<<"Count="<<count;
    }
    
    A(int count=0)
    {
    this -> count=count;

    }
};
int main()
{
    A obj1, obj2(10);
    
    obj1.display();
    obj2.display();
}