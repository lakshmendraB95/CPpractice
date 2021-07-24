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
        string s;
        int h1, m1, h2, m2;
        h1 = m1 = h2 = m2 = 0;
        cin >> s;
        int i;
        int j = 0;
        string k = "??????????";
        if (s == k)
        {
            cout << 6 << endl;
        }
        else if (s[0]=='?')
        {
            reverse(s.begin(),s.end());
            for (i = 0; i < 10; i++)
            {
                if (i % 2 == 0)
                {
                    if (s[i] == '1')
                    {
                        h1++;
                    }
                    else if (s[i] == '0')
                    {
                        m1++;
                    }
                    else if (s[i] == '?')
                    {
                        if (h1 > h2)
                        {
                            h1++;
                        }
                        else
                        {
                            m1++;
                        }
                    }
                }
                else
                {
                    if (s[i] == '1')
                    {
                        h2++;
                    }
                    else if (s[i] == '0')
                    {
                        m2++;
                    }
                    else if (s[i] == '?')
                    {
                        if (h2 > h1)
                        {
                            h2++;
                        }
                        else
                        {
                            m2++;
                        }
                    }
                }
                if (m2 > 5 - h1 || m1 > 5 - h2)
                {
                    i++;
                    break;
                }
            }

            cout << i << endl;
        }
        else
        {
            for (i = 0; i < 10; i++)
            {
                if (i % 2 == 0)
                {
                    if (s[i] == '1')
                    {
                        h1++;
                    }
                    else if (s[i] == '0')
                    {
                        m1++;
                    }
                    else if (s[i] == '?')
                    {
                        if (h1 > h2)
                        {
                            h1++;
                        }
                        else
                        {
                            m1++;
                        }
                    }
                }
                else
                {
                    if (s[i] == '1')
                    {
                        h2++;
                    }
                    else if (s[i] == '0')
                    {
                        m2++;
                    }
                    else if (s[i] == '?')
                    {
                        if (h2 > h1)
                        {
                            h2++;
                        }
                        else
                        {
                            m2++;
                        }
                    }
                }
                if (m2 > 5 - h1 || m1 > 5 - h2)
                {
                    i++;
                    break;
                }
            }

            cout << i << endl;
        }
    }
    return 0;
}