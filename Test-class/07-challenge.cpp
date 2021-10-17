#include "bits/stdc++.h"
using namespace std;

string streverse(string str)
{
    string s = "";
    if (str.length() < 2)
        return s;
    str = str.substr(0, str.length() - 1);
    reverse(str.begin(), str.end());
    return str;
}

int main()
{
    string s;
    string ns;
    cin >> s;
    const int sl = s.length();
    string blanks(2 * sl - 1, ' ');

    for (int i = 1; i < sl; i++)
    {
        ns = s.substr(0, i);
        cout << blanks.substr(0, sl - i) << ns << streverse(ns) << endl;
    }
    return 0;
}