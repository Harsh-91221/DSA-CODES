#include <iostream>
using namespace std;
class A
{
public:
    void speak()
    {
        cout << "SPEAKING" << endl;
    }
};
class B
{
public:
    void speak()
    {
        cout << "BARKING" << endl;
    }
};
class C : public A, public B
{
};
int main()
{
    C ya;
    ya.A::speak();
    ya.B::speak();
}