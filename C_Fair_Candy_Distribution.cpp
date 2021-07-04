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
 

int main()
{
    fast_cin();
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    map<ll,ll> mp;
    rep(i,n)
    {
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    sort(all_a(arr,n));
    if(k%n==0)
    {
        rep(i,n)
        {
            cout<<k/n<<endl;
        }
    }
    else
    {
        ll ans[n];
        rep(i,n)
        {
            ans[i]=k/n;
        }
        rep(j,k%n)
        {
            ans[mp[arr[j]]]++;
        }
        rep(i,n)
        {
            cout<<ans[i]<<endl;
        }
    }
    return 0;
}