#include <iostream>
using namespace std;
class Human
{
public:
    int age;
    int height;

public:
    int getage()
    {
        return this->age;
    }
    void getheight(int h)
    {
        this->age = h;
    }
};
class Male : public Human
{
public:
    string sleep;
    void getsleep()
    {
        cout << "SLEEPING" << endl;
    }
};
int main()
{
    Male L;
    L.age = 25;
    L.height = 5;
    cout << L.age << endl;
    cout << L.height << endl;
    cout << L.sleep << endl;
    L.getsleep();
}