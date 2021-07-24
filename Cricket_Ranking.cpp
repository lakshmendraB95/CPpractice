#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll MOD = 998244353;
#define rep(i, e) for (ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout << #x << " = " << x << endl
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all_v(x) (x).begin(), (x).end()
#define all_a(a, n) a, a + n
#define max_a(a, n) *max_element(all_a(a, n));
#define min_a(a, n) *min_element(all_a(a, n));
#define max_v(v) *max_element(all_v(v));
#define min_v(v) *min_element(all_v(v));

int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while (t--)
    {
        int a, b, c, c1 = 0, c2 = 0;
        cin >> a >> b >> c;
        int x, y, z;
        cin >> x >> y >> z;
        if (a > x)
        {
            c1++;
        }
        else
        {
            c2++;
        }
        if (b > y)
        {
            c1++;
        }
        else
        {
            c2++;
        }
        if (c > z)
        {
            c1++;
        }
        else
        {
            c2++;
        }

        if (c1 > c2)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }
    return 0;
}