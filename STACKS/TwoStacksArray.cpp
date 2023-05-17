#include <iostream>
using namespace std;
class TwoStack
{
    int *arr;
    int top1;
    int top2;
    int size;

public:
    // Initialize TwoStack.
    TwoStack(int s)
    {
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    // Push in stack 1.
    void push1(int num)
    {
        // ATLEAST ONE ELEMENT IN STACK
        if (top2 - top1 == 1)
        {
            cout << "STACK OVERFLOW" << endl;
        }
        else
        {
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num)
    {
        if (top2 - top1 == 1)
        {
            cout << "STACK OVERFLOW" << endl;
        }
        else
        {
            top2--;
            arr[top2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1()
    {
        if (top1 == -1)
        {
            return -1;
        }
        else
        {
            top1--;
        }
    }
    // Pop from stack 2 and return popped element.
    int pop2()
    {
        if (top2 == size)
        {
            return -1;
        }
        else
        {
            top2++;
        }
    }
    void print()
    {
        cout << "TOP 1 : " << top1 << endl;
        cout << "TOP 2 : " << top2 << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    TwoStack s(10);
    s.push1(10);
    s.print();
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    s.push1(40);
    s.print();
    s.push1(50);
    s.print();

    s.push2(1);
    s.print();
    s.push2(2);
    s.print();
    s.push2(3);
    s.print();
    s.push2(4);
    s.print();
    s.push2(5);
    s.print();
}