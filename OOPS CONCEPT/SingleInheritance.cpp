#include <iostream>
using namespace std;
class Human
{
public:
    int age;
    int weight;
    void getage()
    {
        cout << "JAWANI" << endl;
    }
    void getweight()
    {
        cout << "OVERWEIGHT" << endl;
    }
};
class Male : public Human
{
public:
    int height;
    void getheight()
    {
        cout << "6 foot" << endl;
    }
};
int main()
{
    Male D;
    cout << D.age << endl;
    cout << D.weight << endl;
    D.getage();
    D.getweight();
    D.getheight();
}