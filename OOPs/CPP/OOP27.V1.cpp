/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Emp
{
    int empid;
    int empsal;
    public:
    Emp(int id=-5, int sal=0)
    {
        this->empid=id;
        this->empsal=sal;
    }
    
    void display()
    {
        cout<<"\nID="<<empid<<endl<<"salary="<<empsal;
    }
};

int main()
{
    Emp emp1;
    emp1.display();
    Emp emp2(101, 50000);
    emp2.display();
    
    
}