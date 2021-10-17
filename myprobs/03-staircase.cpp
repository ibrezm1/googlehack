#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= n; ++i)
#define dsp(v)       \
    for (auto i : v) \
    std::cout << i << ' '
#define pb push_back
using namespace std;
typedef long long ll;
void solveit()
{
    int N;
    cin >> N;
    vector<int> steps;
    steps.pb(1);
    steps.pb(1);
    if (N > 2)
        for (int i = 2; i <= N; i++)
            steps.pb(steps[i - 1] + steps[i - 2]);
    cout << steps[N] << endl;
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