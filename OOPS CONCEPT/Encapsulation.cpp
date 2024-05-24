#include <iostream>
using namespace std;
class Hero
{
private:
    string name;
    int power;
    int ki;

public:
    int getpower()
    {
        return this->power;
    }
};
int main()
{
    Hero goku;
    cout << "ALL IS WELL" << endl;
}
