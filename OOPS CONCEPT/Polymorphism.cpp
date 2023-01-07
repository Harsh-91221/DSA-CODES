#include <iostream>
using namespace std;
// FUNCTION OVERLOADING
class A
{
public:
    void saybye()
    {
        cout << "TATA" << endl;
    }
    void saybye(string name)
    {
        cout << "KYA BAAT HA" << name << endl;
    }
    void saybye(int n)
    {
        cout << "UWU" << n << endl;
    }
};
// OPERATOR OVERLOADING
class B
{
public:
    int a;
    void operator+(B &obj) // Overloading plus(+) operator here
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "OUTPUT -> " << value2 - value1 << endl;
    }
    void operator()() // Overloading bracket() operator here
    {
        cout << "MA BRACKET HU " << this->a << endl;
    }
};
int main()
{
    A obj;
    obj.saybye();
    B obj1, obj2;
    obj1.a = 5;
    obj2.a = 9;
    obj1 + obj2; // Calling (+) operator
    obj2();      // Calling bracket() operator
}