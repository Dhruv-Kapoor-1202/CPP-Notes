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
    
    int rollno;
    
    int m1,m2,m3;
   
    public:
    int cal_total();
    void read_marks();
};
void Student :: read_marks()
{
    cout<<"Enter Marks1: ";
    cin>>m1;
    cout<<"Enter Marks2: ";
    cin>>m2;
    cout<<"Enter Marks3: ";
    cin>>m3;
    
    return;
}

int Student :: cal_total()
{
    return(m1+m2+m3);
}

int main()
{
    Student S1;
   
    S1.read_marks();
   
    cout<<S1.cal_total();
    return 0;
}
