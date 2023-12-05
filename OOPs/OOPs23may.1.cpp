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
    public:
    void disp()
    {
        cout<<"I am in disp of A.\n";
    }
};

class B : protected A
{
    public:
    void mymethod()
    {
        disp();
    }
    void show()
    {
        cout<<"I am in show.\n";
    }
};

class C : B
{
    public:
    void myshow()
    {
        disp();
    }
};

int main()
{
    B obj; 
    //obj.disp();
    obj.mymethod();
    C obj1;
    obj1.myshow();
}