#include <iostream>
using namespace std;
class hero
{
public:
    void print()
    {
        cout << "Koi dikkat nahi" << endl;
    }
    void print(int a)
    {
        cout << "a ke saath bhi koi dikkat nahi" << endl;
    }
    void print(char a)
    {
        cout << "char is ok" << endl;
    }
};
int main()
{
    hero a;
    a.print('A');
}
// class hero
// {
// public:
//     int a;
//     int b;

// public:
//     void operator+(hero &obj)
//     {
//         int value1 = this->a;
//         int value2 = obj.a;
//         cout << value2 - value1 << endl;
//     }
//     void operator++()
//     {
//         a += 5;
//     }
//     void print()
//     {
//         cout << a << endl;
//     }
// };
// int main()
// {
// hero obj1, obj2;
// obj1.a = 4;
// obj2.a = 7;
// obj1.operator++();
// obj1.print();
// }