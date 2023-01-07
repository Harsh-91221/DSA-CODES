#include <iostream>
using namespace std;
class Hero
{
private:
    int health;

public:
    char name[100];
    char level;
    static int time; // STATIC MEMBER
    // PARAMATERISED CONSTRUCTOR
    // Hero(int health)
    //{
    //  cout << this << endl;
    // this->health = health;
    // cout << health << endl;
    //}
    // Hero()
    //{
    //     cout << "CONSTRUCTOR" << endl; // CONSTRUCTOR
    // }

    Hero()
    {
        cout << "SIMPLE CONSTRUCTOR CALLED" << endl;
    }
    // Hero(int health, char level)
    // {
    //     this->level = level;
    //     this->health = health;
    // }
    // // COPY CONSTRUCTOR
    // Hero(Hero &temp)
    // {
    //     cout << "COPY CONSTRUCTOR CALLED HERE" << endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }
    void print()
    {
        cout << health << " " << level << endl;
    }
    //  Getter
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    // Setter
    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(char l)
    {
        level = l;
    }
    // DESTRUCTOR
    ~Hero()
    {
        cout << "DESTRUCTOR CALLED" << endl;
    }
};
int Hero::time = 100; // STATIC MEMBER
int main()
{
    // STATICALLLY ACCESSING
    cout << Hero::time << endl;
    // STATIC
    Hero goku;
    cout << goku.time << endl;
    // DYNAMIC
    Hero *vegeta = new Hero();
    // MANUALLY CALLING DESTRUCTOR
    delete vegeta;
    // creation of object
    // static allocation
    // Hero goku(100, 'S');
    // goku.print();
    // COPY CONSTRUCTOR
    // Hero vegeta(goku);
    // vegeta.print();
    // cout << &goku << endl;
    // dynamic allocation
    // Hero *h = new Hero;
}
/* goku.sethealth(100);
goku.setlevel('S');
cout << "GOKU LEVEL IS : " << goku.getlevel() << endl;
cout << "GOKU HEALTH IS : " << goku.gethealth() << endl;
// dynamic allocation
Hero *vegeta = new Hero;
(*vegeta).sethealth(9000);
(*vegeta).setlevel('Z');
cout << "VEGETA LEVEL IS : " << vegeta->getlevel() << endl; // THESE BOTH METHODS CAN BE USED FOR CALLING THE OBJECT FOR VEGETA i.e star and arrow
cout << "VEGETA HEALTH IS : " << (*vegeta).gethealth() << endl;
//  cout << goku.gethealth() << endl;
//  cout << goku.getlevel() << endl;
//  goku.health = 100;
//  goku.level = 'S';
// cout << goku.health << endl;
// cout << goku.level << endl;
// cout << sizeof(goku) << endl;
}*/
