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
    int n;
    cin >> n;
    int arr[n];
    vector<ll> v;
    ll max_size = 0;
    ll i1, i2;
    ll max_val = 0;
    stack<ll> s;
    int c=0;
    rep(i, n)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            c++;
            s.push(arr[i]);
            if (s.size() > max_size)
            {
                max_size = s.size();
                i1 = i + 1;
            }
        }
        else
        {
            c++;
            s.pop();
            if (!s.size())
            {
                if (c > max_val)
                {
                    max_val = c;
                    i2 = i + 2 - max_val;
                }
                c=0;
            }
        }
    }
    cout << max_size << " " << i1 << " " << max_val << " " << i2;
    return 0;
}