#include <iostream>
using namespace std;
class Animal
{
public:
    void speak()
    {
        cout << "SPEAKING" << endl;
    }
};
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "BARKING" << endl;
    }
};
int main()
{
    Dog obj;
    obj.speak();
}