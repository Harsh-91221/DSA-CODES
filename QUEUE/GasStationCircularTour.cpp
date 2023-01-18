#include <iostream>
using namespace std;
int findStartingPoint(int gas[], int cost[], int n)
{
    int totalGas = 0, totalCost = 0, startingPoint = 0, currentGas = 0;

    for (int i = 0; i < n; i++)
    {
        totalGas += gas[i] - cost[i];
        currentGas += gas[i] - cost[i];

        if (currentGas < 0)
        {
            startingPoint = i + 1;
            currentGas = 0;
        }
    }

    if (totalGas >= 0)
    {
        return startingPoint;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int gas[] = {1, 2, 3, 4, 5};
    int cost[] = {3, 4, 5, 1, 2};
    int n = sizeof(gas) / sizeof(gas[0]);

    int startingPoint = findStartingPoint(gas, cost, n);

    if (startingPoint == -1)
    {
        cout << "No solution" << endl;
    }
    else
    {
        cout << "Starting point: " << startingPoint << endl;
    }

    return 0;
}