#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
int main()
{
    A obj;
    obj.set(20, 40);
    obj.display();
}