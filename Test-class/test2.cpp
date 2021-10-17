#include "bits/stdc++.h"
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        i != size - 1 ? cout << "." : cout << "";
    }
    cout << endl;
}

int main()
{
    int a[5]{10, 1, 1, 1, 1};
    printArray(a, 5);
    int b[5]{1, 2};
    printArray(b, 5);
    int c[5]{0};
    printArray(c, 5);

    return 0;
}