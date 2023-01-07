#include <iostream>
using namespace std;
int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "ENTER THE NAME" << endl;
    cin >> name;
    int k = getlength(name);
    cout << k;
}