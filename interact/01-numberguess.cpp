#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <cmath>
#include <stack>
#include <iomanip>
#include <functional>
#include <array>
#include <bitset>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        int A, B, N;
        cin >> A >> B >> N;
        ++A;
        for (;;)
        {
            int mid = (A + B) >> 1;
            cout << mid << '\n';
            cout << flush;
            string s;
            cin >> s;
            if (s == "TOO_SMALL")
                A = mid + 1;
            else if (s == "TOO_BIG")
                B = mid - 1;
            else
                break;
        }
    }
    return 0;
}