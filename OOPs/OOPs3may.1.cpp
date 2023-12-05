/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Num{
    int n;
    public:
    Num(int n=0)
    {
        this -> n=n;
    } 
    operator int()
    {
        return n;
    }
    void printNum()
    {
        cout<<n;
    }
};

int main()
{
    int x;
    cin>>x;
    cout<<x<<endl;
    Num N=15;
    int y=N;
    cout<<x+y;
}