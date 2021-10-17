#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solveit()
{
    int N;
    cin >> N;
    vector<int> ar(N);
    vector<int> df;
    for (int &i : ar)
        cin >> i;

    for (int i = 1; i < N; i++)
        df.push_back(ar[i - 1] - ar[i]);

    sort(df.begin(), df.end());

    int count = 1, tempCount;
    int popular = df[0];
    int temp = 0;
    for (int i = 0; i < (df.size() - 1); i++)
    {
        temp = df[i];
        tempCount = 0;
        for (int j = 1; j < df.size(); j++)
        {
            if (temp == df[j])
                tempCount++;
        }
        if (tempCount > count)
        {
            popular = temp;
            count = tempCount;
        }
    }
    cout << popular;

    cout << "\n";
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