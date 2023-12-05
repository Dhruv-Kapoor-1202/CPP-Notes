// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Base
{
    public:
    virtual void display()
    {
        
        cout<<"I am in display of Base";
    }
};
class Derived : public Base
{
    public:
    void display()
    {
        cout<<"I am in display of Derived.";
    }
};
int main() 
{
    Base *obj = new Derived;
    /*Derived *obj = new Derived;*/
    obj -> display();
    
}    
