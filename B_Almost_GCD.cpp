#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll MOD = 998244353;
#define rep(i, e) for (ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()

int main()
{
    fast_cin();
    int n;
    cin >> n;
    int arr[n];
    int m = 0;
    rep(i, n)
    {
        cin >> arr[i];
        if (arr[i] > m)
        {
            m = arr[i];
        }
    }
    int answer = 0;
    int ans = 0;
    for (int j = 2; j <= m; j++)
    {
        int count = 0;
        rep(i, n)
        {
            if (arr[i] % j == 0)
            {
                count++;
            }
        }
        if (count >= answer)
        {
            ans = max(ans, j);
            answer = count;
        }
    }
    cout << ans;
    return 0;
}