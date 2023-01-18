#include <iostream>
#include <queue>
using namespace std;
class CircularQueue
{
private:
    int front;
    int rear;
    int n = 5;
    int *arr;

public:
    // Initialize your data structure.
    CircularQueue()
    {
        front = rear = -1;
        arr = new int[n];
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    void enqueue(int value)
    {
        // TO CHECK WHETHER QUEUE IS FULL
        if ((front == 0 && rear == n - 1) || (rear == (front - 1) % (n - 1)))
        {
            cout << "QUEUE IS FULL" << endl;
        }
        else if (front == -1) // FIRST ELEMENT TO PUSH
        {
            front = rear = 0;
        }
        else if (rear == n - 1 && front != 0)
        {
            rear = 0; // TO MAINTAIN CYCLIC NATURE
        }
        else
        {
            rear++;
        }
        arr[rear] = value;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue()
    {
        if (front == -1) // TO CHECK QUEUE IS EMPTY
        {
            cout << "QUEUE IS EMPTY" << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear) // SINGLE ELEMENT IS PRESENT
        {
            front = rear = -1;
        }
        else if (front == n - 1)
        {
            front = 0; // TO MAINTAIN CYCLIC NATURE
        }
        else
        {
            front++;
        }
        return ans;
    }
};
int main()
{
    CircularQueue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6); // Queue is full, cannot enqueue
    cout << "Queue size: " << q.size() << endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.enqueue(6);
    q.enqueue(7);
}