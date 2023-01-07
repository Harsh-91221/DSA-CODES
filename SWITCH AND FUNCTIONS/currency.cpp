#include<iostream>
using namespace std;
int main()
{
    int n,hundred,fifty,twenty,ten;
    cout<< "Enter the number"<<endl;
    cin>> n;
    switch(1)
    {
        case 1: hundred=n/100;
        n=n%100;
        cout<< "number of 100 notes are "<< hundred<< endl;
        case 2: fifty=n/50;
        n=n%50;
        cout<< "number of 50 notes are "<< fifty<< endl;
        case 3: twenty=n/20;
        n=n%20;
        cout<< "number of 20 notes are "<< twenty<< endl;
        case 4: ten=n/10;
        n=n%10;
        cout<< "number of 10 notes are "<< ten<< endl;

    }

}