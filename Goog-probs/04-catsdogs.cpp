#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solveit()
{
    int N, D, C, M;
    string S;
    cin >> N >> D >> C >> M;
    cin >> S;
    int dogstobefed = 0;
    int lastdog = 0;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == 'D')
            dogstobefed++, lastdog = i;
    }

    for (int i; i <= lastdog; i++)
    {
        if (S[i])
    }
}

int main()
{
    ios_base::sync_with_stdio(0);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cout << "Case #" << i + 1 << ": ";
        solveit();
    }
    return 0;
}