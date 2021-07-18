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

template <typename T>
T ceil(T x, T n)
{
    T ans = 0;
    ans = x / n;
    if (x % n)
        ans++;
    return ans;
}

ll min(ll a, ll b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    fast_cin();
    ll a, b, c;
    cin >> a >> b >> c;
    ll k = a + c - 2 * b;
    if (k < 0)
        cout << -1 * k;
    else
    {
        if (k & 1)
        {
            cout << ceil(k, (ll)2) + 1 << endl;
        }
        else
            cout << k / 2;
    }

    return 0;
}