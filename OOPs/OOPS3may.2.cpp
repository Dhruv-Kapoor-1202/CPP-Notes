/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Triangle
{ 
    int base,height;
    float area;
    public:
    Triangle(int b,int h)
    { 
        base =b;
        height=h;  
        area=0.5*base*height;
    }
    void print()
    { 
        cout<<"\nBase : "<<base<<"\nHeight : "<<height<<"\nArea of triangle : "<<area;
    }  
    int getBase() 
    { 
        return base; 
    }
    int getHeight()
    { 
        return height;
    }
};
class Rectangle
{ 
    int width,length,area;
    public:
    void output()
    {   
        cout<<"\nLength : "<<length<<"\nWidth : "<<width<<"\nArea of rectangle : "<<area;
    }
    Rectangle(Triangle t)
    { 
        width=t.getBase(); 
        length=t.getHeight(); 
        area=width*length;
    }
};
int main()
{ 
    Triangle t(10,20);
    Rectangle r=t;//Rectangle(t)
    t.print();
    r.output();
    return 0;
}

