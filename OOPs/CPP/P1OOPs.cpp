/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class XYZ
{
    private:
    int num=100;
    
    friend class ABC;
};

class ABC
{
    public:
    void disp(XYZ obj)
    {
        cout<<obj.num;
    }
};

int main()
{
    ABC obj;
    XYZ obj1;
    
    obj.disp(obj1);
}