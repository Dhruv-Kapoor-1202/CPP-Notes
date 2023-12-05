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
    
    int m[5];
   
    public:
    int cal_total();
    void read_marks();
};
void Student :: read_marks()
{
    for(int i=0; i<5; i++)
    {
        cout<<"Enter Marks : ";
        cin>>m[i];
    }
    return;
    
}


int Student :: cal_total()
{
    int sum=0;
    for(int i=0; i<5; i++)
    {
        sum+=m[i];
        
    }
    return sum;
}

int main()
{
    Student S[5];
    for(int i=0; i<5; i++)
    {
        cout<<"Enter marks of "<<i<<" student"<<endl;
        S[i].read_marks();
    }
    
    for(int i=0; i<5; i++)
    {
        cout<<S[i].cal_total()<<endl;
    }
}
