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
ll rds(ll sum)
{
    if (sum / 10 ==0)
    {
        return sum;
    }
    else
    {
        ll x = 0;
        while (sum)
        {
            x += (sum % 10);
            sum /= 10;
        }
        return rds(x);
    }
}

int main()
{
    fast_cin();
    string num; 
    ll k;
    cin >> num >> k;
    ll sum = 0;
    for(int  i = 0 ; i<num.length() ; i++)
    {
        sum+= num[i]-'0';
    }
    sum *= k;
    cout << rds(sum);
    return 0;
}