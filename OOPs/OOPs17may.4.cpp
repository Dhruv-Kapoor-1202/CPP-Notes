// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class A
{
    int x;
    public:
    A()
    {
        x=5;
    }
    void display()
    {
        cout<<"Value of x="<<x;
    }
};
class B : public A
{
    int y
    public:
    B()
    {
        y=10;
    }
    void display()
    {
        cout<<"Value of y="<<y;
    }
};
int main() 
{
    A obj1, *obj3;
    B obj2;
    obj1.A :: display();
    obj1.display();
    obj3=&obj2;
    obj3->display();
    
}    
