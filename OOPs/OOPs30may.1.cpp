#include<iostream>
using namespace std;

template <typename T>
T add(T num1, T num2) 
{
    return (num1 + num2);
}
int main() 
{
    
    int result1;
    double result2;
    // calling with int parameters
    result1 = add<int>(2, 3);
    cout << result1 << endl;

    // calling with double parameters
    result2 = add<double>(2.2, 3.3);
    cout << result2 << endl;
    float result3 = add<float>(2.1F, 3.0F);
    cout << result3 << endl;
    
    char result4 = add<float>('A','1' );
    cout << result4 << endl;
 
    return 0;
}