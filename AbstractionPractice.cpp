#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    virtual void dancing() = 0;
    virtual void eating() = 0;
};
class B : public A
{
    void dancing()
    {
        cout << "B DANCING" << endl;
    }
    void eating()
    {
        cout << "B EATING" << endl;
    }
};
class C : public A
{
    void dancing()
    {
        cout << "C DANCING" << endl;
    }
    void eating()
    {
        cout << "C EATING" << endl;
    }
};
void doing(A *&obj)
{
    obj->dancing();
    obj->eating();
}
int main()
{
    A *obj = new C();
    doing(obj);
    // A obj;
    // obj.set(20, 40);
    // obj.display();
}