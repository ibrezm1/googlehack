#include <iostream>
using namespace std;

int main()
{
    int sr, lr;
    float ct, ctt;
    cout << "welcome" << endl;
    cout << "Small";
    cin >> sr;

    cout << "large";
    cin >> lr;

    ct = sr * 25 + lr * 35;
    ctt = 1.06 * ct;
    cout << "Estimate";
    //cout << "Cost :" << ctt;
    printf("Cost %.2f", ctt);

    return 0;
}