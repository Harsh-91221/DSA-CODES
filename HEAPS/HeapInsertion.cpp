#include <iostream>
using namespace std;
class heap
{
public:
    int arr[101];
    int size;
    heap()
    {
        size = 0;
    }
    void insert(int value)
    {
        size = size + 1;
        int index = size;
        arr[index] = value;
        while (index > 1)
        {
            int ParentIndex = index / 2;
            if (arr[index] > arr[ParentIndex])
            {
                swap(arr[index], arr[ParentIndex]);
                index = ParentIndex;
            }
            else
            {
                break;
            }
        }
    }
};
int main()
{
    heap h;
    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.arr[3] = 25;
    h.arr[4] = 12;
    h.arr[5] = 6;
    h.arr[6] = 3;
    h.arr[7] = 1;
    h.size = 7;
    cout << "PRINTING THE HEAP " << endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;
    h.insert(30);
    cout << "PRINTING THE HEAP AFTER INSERT " << endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
}