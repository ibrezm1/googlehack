// Simple C++ program to display "Hello World"
// g++ test.cpp -o test
// ./test
// Header file for input output functions
#include <iostream>

using namespace std;

// main function -
// where the execution of program begins
int main()
{
    int favoratenumber = 0;
    cout << "enter fv numebr" << endl;
    cin >> favoratenumber;
    cout << "fv numebr :" << favoratenumber << endl;

    for (int i = 1; i <= favoratenumber; ++i)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}