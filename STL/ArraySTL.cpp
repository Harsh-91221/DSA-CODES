#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 4> a = {4, 6, 8, 2};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " " << endl;
    }
    cout << "ELEMENT AT 2ND INDEX " << a.at(2) << endl;
    cout << "EMPTY OR NOT " << a.empty() << endl;
    cout << "FIRST ELEMENT " << a.front() << endl;
    cout << "LAST ELEMENT " << a.back() << endl;
}