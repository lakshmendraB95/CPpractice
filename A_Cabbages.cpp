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
 
ll max(ll a,ll b)
{
    if(a>=b)
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
    ll n,a,x,y;
    cin>>n>>a>>x>>y;
    cout<<(min(a,n)*x)+(max((n-a),0)*y);
    return 0;
}