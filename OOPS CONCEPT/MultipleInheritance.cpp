#include <iostream>
using namespace std;
class Human
{
public:
    int age;
    void speak()
    {
        cout << "SPEAKING" << endl;
    }
};
class Dog
{
public:
    int B;
    void bark()
    {
        cout << "BARKING" << endl;
    }
};
class Hybrid : public Human, public Dog
{
};
int main()
{
    Hybrid D;
    D.bark();
    D.speak();
}