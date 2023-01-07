#include <iostream>
using namespace std;
void say(int n, string a[])
{
    if (n == 0)
    return ;
    int digit = n % 10;
    n = n / 10;
    say(n, a);
    cout << a[digit] << " ";
    
}
int main()
{
    string a[10] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
    int n;
    cin >> n;
    say(n, a);
    cout << endl;
}