// C++ program to demonstrate the use of class templates

#include <iostream>
using namespace std;

// Class template
template <class T>
class Number 
{
    private:
    // Variable of type T
    T num;

    public:
    Number(T n) : num(n) 
    {
        
    }   // constructor

    T getNum() 
    {
        return num;
    }
};

int main() {

    // create object with int type
    Number<int> n1(7);

    // create object with double type
    Number<double> n2(7.7);
    Number<float> n3(17.2f);

    cout << "int Number = " << n1.getNum() << endl;
    cout << "double Number = " << n2.getNum() << endl;

    cout << "float Number = " << n3.getNum() << endl;
   

   
    return 0;
}