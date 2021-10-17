#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct player
{
    string name;
    int rating;
};
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second > b.second);
}
void solveit()
{
    int N;
    cin >> N;
    vector<int> cl(N);
    vector<pair<int, float>> cpl(N);

    for (int i = 0; i < N; i++)
    {
        cin >> cl[i];
        cpl.push_back(make_pair(i + 1, (float)cl[i] / (i + 1)));
    }

    sort(cpl.begin(), cpl.end(), sortbysec);

    int avail = N;
    int i = 0;
    int cnt = 0;
    int sell = 0;
    while (avail > 0)
    {
        int curr = cpl[i].first;
        if (avail / curr > 0)
        {
            cnt = avail / curr;
            sell = sell + cnt * cl[curr - 1];
            avail = avail % cnt;
        }
        i++;
    }

    //Add implementation here
    cout << sell << endl;
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cout << "Case #" << i + 1 << ": ";
        solveit();
    }
    return 0;
}