#include <iostream>
using namespace std;
class Human
{
public:
    int age;
    void getage()
    {
        cout << "JAWANI" << endl;
    }
};
class Male : public Human
{
};
class Female : public Male
{
public:
    void gethuman()
    {
        cout << "HI" << endl;
    }
};
int main()
{
    Female D;
    D.getage();
    D.gethuman();
}