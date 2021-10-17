#include <bits/stdc++.h>
//scottwu  //Round A 2021
using namespace std;
typedef long long ll;

int N, K;
string S;

void gogo()
{
    cin >> N >> K;
    cin >> S;

    int cscore = 0;
    for (int i = 0; i < N / 2; i++)
        if (S[i] != S[N - 1 - i])
            cscore++;
    cout << abs(K - cscore) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cout << "Case #" << i + 1 << ": ";
        gogo();
    }
    return 0;
}