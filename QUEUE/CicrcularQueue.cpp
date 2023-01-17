#include <bits/stdc++.h>
class CircularQueue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    // Initialize your data structure.
    CircularQueue(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value)
    {
        // TO CHECK WHETHER QUEUE IS FULL
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            return false;
        }
        else if (front == -1) // FIRST ELEMENT TO PUSH
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0; // TO MAINTAIN CYCLIC NATURE
        }
        else
        {
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue()
    {
        if (front == -1) // TO CHECK QUEUE IS EMPTY
        {
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear) // SINGLE ELEMENT IS PRESENT
        {
            front = rear = -1;
        }
        else if (front == size - 1)
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