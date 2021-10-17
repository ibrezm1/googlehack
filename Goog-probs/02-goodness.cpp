#include <bits/stdc++.h>
//mliu435@wisc.edu //Round A 2021
#define rep(i, n) for (int i = 1; i <= n; ++i)
#define pb push_back
#define mp make_pair
#define st first
#define nd second
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pr;
const int N = 1e6 + 5, mod = 1e9 + 7;
int gcd(int x, int y) { return y ? gcd(y, x % y) : x; }
int n, T, k;
char s[N];
int main()
{
    scanf("%d", &T);
    rep(Cas, T)
    {
        scanf("%d%d", &n, &k);
        scanf("%s", s + 1);
        int now = 0;
        rep(i, n / 2) if (s[i] != s[n - i + 1])++ now;
        printf("Case #%d: %d\n", Cas, abs(now - k));
    }
    return 0;
}