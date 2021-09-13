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
    ll n,sum;
    cin>>n>>sum;
    ll ans[n];
    ll mx[n];
    ll max_sum,min_sum;
    max_sum=min_sum=0;
    rep(i,n)
    {
        cin>>ans[i]>>mx[i];
        min_sum+=ans[i];
        max_sum+=mx[i];
    }
    if(min_sum>sum || max_sum<sum)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES"<<endl;
        sum-=min_sum;
        for(int i = 0 ; i<n ; i++)
        {
            if(sum)
            {
                ll x = min(sum,mx[i]-ans[i]);
                ans[i]+=x;
                sum-=x;
            }
            else
            {
                break;
            }
        }
        rep(i,n)
        {
            cout<<ans[i]<<" ";
        }
    }
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