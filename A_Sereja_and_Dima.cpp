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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = n - 1, max, k = 0;
    int x = 0, y = 0;
    while (i <= j)
    {
        if (a[i] >= a[j])
        {
            max = a[i];
            i++;
        }
        else
        {
            max = a[j];
            j--;
        }
        if (k % 2 == 0)
            x += +max;
        else
            y += max;
        k++;
    }
    cout<<x<< " "<<y<<endl;
    return 0;

    return 0;
}