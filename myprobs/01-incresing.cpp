#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solveit()
{
    int N;
    string S;
    cin >> N;
    cin >> S;
    int lg = 1;

    for (int i = 0; i < N; i++)
    {
        if (i != 0)
        {
            if (S[i - 1] < S[i])
                ++lg;
            else
                lg = 1;
        }
        cout << " " << lg;
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cout << "Case #" << i + 1 << ":";
        solveit();
    }
    return 0;
}