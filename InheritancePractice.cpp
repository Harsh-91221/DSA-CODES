#include <iostream>
using namespace std;
class Human
{
public:
    int mood;

public:
    int age;
    int height;

public:
    void sleep()
    {
        cout << "SLEEPING" << endl;
    }
};
class male : protected Human
{
public:
    int power;
    void setpower(int power)
    {
        this->power = power;
    }
    int getpower()
    {
        return this->power;
    }
    void setmood(int mood)
    {
        this->mood = mood;
    }
    int getmood()
    {
        return this->mood;
    }
};
int main()
{
    male m;
    m.setmood(0);
    cout << m.getmood() << endl;
    // m.setpower(100);
    // cout << m.getpower() << endl;
    // m.sleep();
}