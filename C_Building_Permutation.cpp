#include <bits/stdc++.h>  
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mod               1000000007
#define modadd(a,b,c)     ((a%c)+(b%c))%c
#define modmul(a,b,c)     ((a%c)*(b%c))%c
#define modsub(a,b,c)     ((a%c)-(b%c))%c
 
void solve()
{
    ll n;
    cin>>n;
    ll arr[n+1];
    arr[0]=0;
    for(ll i = 1; i<=n ;i++)
    {
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    ll ans=0;
    for(ll i = 1; i<=n ;i++)
    {
        ans+=abs(arr[i]-i);
    }
    cout<<ans<<endl;
}
int main()
{
    fast_cin();
   // ll t;
    //cin >> t;
 //while(t--)
 // {
 // solve();
  //}
 solve();
    return 0;
}