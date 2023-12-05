#include <iostream>
using namespace std;

template <typename T, typename U>
class ComplexNum
{
    private:
    T real;
    U imaginary;
    
    public:
    ComplexNum(T a, U b)
    {
        real=a;
        imaginary=b;
    }
    
    void disp()
    {
        cout<<real<<" ,"<<imaginary;
    }
};
int main()
{
    ComplexNum<int, float> C1(12, 7.67);
    C1.disp();
}
