/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class Student
{
    public:
   
    int rollno;
    int m1,m2,m3;
   
    int cal_total();
};

int Student :: cal_total()
{
    return(m1+m2+m3);
}

int main()
{
    Student S1;
   
    S1.m1 = 50;
    S1.m2 = 70;
    S1.m3 = 80;
   
    cout<<S1.cal_total();
    return 0;
}
