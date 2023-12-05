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
    Student S1;
   
    S1.read_marks();
   
    cout<<S1.cal_total();
    return 0;
}
