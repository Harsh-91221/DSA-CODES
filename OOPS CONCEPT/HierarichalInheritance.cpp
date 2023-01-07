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
class B : public A
{
public:
    void bark()
    {
        cout << "BARKING" << endl;
    }
};
class C : public A
{
public:
    void letsgo()
    {
        cout << "GOING" << endl;
    }
};
int main()
{
    A ok;
    ok.speak();
    B no;
    no.bark();
    no.speak();
    C ya;
    ya.letsgo();
}