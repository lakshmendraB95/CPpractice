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
    ll n;
    cin >> n;
    string arr[n];
    rep(i, n)
    {
        cin >> arr[i];
    }
    rep(i, n)
    {
        if (arr[i].length() == 3)
        {
            cout << "Draw" << endl;
        }
        else
        {
            if (i + 1 < n && (arr[i].substr(arr[i].length() - 3, arr[i].length()-1) == arr[i + 1].substr(0, 3)))
            {
                if (i % 2 == 0)
                {
                    cout << "Takahashi" << endl;
                }
                else
                {
                    cout << "Aoki" << endl;
                }
            }
            else
            {
                if (i % 2)
                {
                    cout << "Takahashi" << endl;
                }
                else
                {
                    cout << "Aoki" << endl;
                }
            }
        }
    }
return 0;
}