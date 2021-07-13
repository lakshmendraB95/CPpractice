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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        int h1, m1, h2, m2;
        h1=m1=h2=m2=0;
        cin >> s;
        int  i;
        for(i=0 ; i< 2 * n ; i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] == '1')
                {
                    h1++;
                }
                else
                {
                    m1++;
                }
            }
            else
            {
                if (s[i] == '1')
                {
                    h2++;
                }
                else
                {
                    m2++;
                }
            }
            if(m2>n-h1 || m1>n-h2)
            {
                i++;
                break;
            }
        }
        cout<<i<<endl;
    }
    return 0;
}