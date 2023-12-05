/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

class Point
{
    public:
    int x, y, z;
    
    Point(int x=0, int y=0, int z=0)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
    
    void display();
    void read_point();
    int Euclidean_Distance();
    
};

void Point :: display()
{
    cout<<"P("<<x<<y<<z<<")";
    
    return;
}

void Point :: read_point()
{
    cout<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;
    cout<<"z: ";
    cin>>z;
    
    return;
}

int Point :: Euclidean_Distance()
{
    return 0;
}

int main()
{
    Point P1;
    P1.read_point();
    P1.display();
    
    Point P2;
    P2.read_point();
    P2.display();
    
}