#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all_v(x) (x).begin(), (x).end()
#define all_a(a,n) a, a+n
#define max_a(a,n) *max_element(all_a(a,n));
#define min_a(a,n) *min_element(all_a(a,n));
#define max_v(v) *max_element(all_v(v));
#define min_v(v) *min_element(all_v(v));
 
ll max(ll a , ll b)
{
    if(a>=b)
    {
        return a;
    }
    return b;
}
int main()
{
    fast_cin();
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n= s.length();
        ll count =0;
        vector<ll> r;
        rep(i,n)
        {
            if(s[i]=='R')
            {
                r.push_back(i+1);
                count++;
            }
        }
        if(count)
        {
        ll m = r[0];
        for(ll i = 1; i<count ; i++)
        {
            m=max(m,r[i]-r[i-1]);
        }
        m =  max(m,(n+1-(r[count-1])));
        cout<<m<<endl;
        }
        else
        {
            cout<<n+1<<endl;
        }
    }
    return 0;
}