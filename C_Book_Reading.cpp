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
    ll n,m;
    cin>>n>>m;
    n/=m;
    int arr[10];
    ll sum1=0;
    rep(i,10)
    {
        arr[i] = (((i+1)*m)%10);
        sum1+=arr[i];
    }

    ll ans=0;
    rep(i,n%10)
    {
        ans+=arr[i];
    }
    cout<<ans+n/10*sum1<<endl;
}

int main()
{
    fast_cin();
   ll t;
    cin >> t;
 while(t--)
 {
 solve();
  }
 // solve();
    return 0;
}