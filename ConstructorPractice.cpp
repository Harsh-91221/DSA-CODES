#include <iostream>
#include <cstring>
using namespace std;

class hero
{
private:
    int health;

public:
    char *name;
    char level;
    static int timeValue; 
    hero()
    {
        name = new char[100];
    }
    hero(int health)
    {
        cout << "this->" << this << endl;
        this->health = health;
    }
    hero(int health, char level)
    {
        cout << "Paramaterized" << endl;
        this->health = health;
        this->level = level;
    }
    // copy constructor for deep copy
    hero(hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }
    void print()
    {
        cout << "Name: " << this->name << endl;
        cout << "Level: " << this->level << endl;
        cout << "Health: " << this->health << endl;
    }
    void sethealth(int health)
    {
        this->health = health;
    }
    void setlevel(char level)
    {
        this->level = level;
    }
    int gethealth()
    {
        return health;
    }
    void setname(char name[])
    {
        strcpy(this->name, name);
    }
    ~hero()
    {
        cout << "DESTRUCTOR" << endl;
    }
};

int hero::timeValue = 5; 

int main()
{
    cout << hero::timeValue << endl;
    // hero h(20);
    // hero g;
    // char name[6] = "Harsh";
    // g.sethealth(100);
    // g.setlevel('H');
    // g.setname(name);
    // hero k(g);
    // cout << &h << endl;
    // hero *a = new hero(100);
    // hero *b = new hero(100, 'C');
    // k.print();
    // g.name[1] = 'E';
    // g.print();
    // k.print();
    // b->print();
    // h.sethealth(90);
    // a->sethealth(50);
    // cout << h.gethealth() << endl;
    // cout << a->gethealth() << endl;
}
