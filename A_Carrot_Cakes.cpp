#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
 ll c(ll x ,ll  d)
 {
     if(x%d==0)
     {
         return x/d;
     }
     else
     {
         return (x/d)+1;
     }
 }

int main()
{
    fast_cin();
    ll n,t,k,d;
    cin>>n>>t>>k>>d;
    ll x = c(n,k);
    ll total = x*t;
    int y = n ; 
    y-=(d/t)*k;
    while(y>0)
    {
        y-=2*k;
        d+=t;
    }
    if(k>=n)
    {
        cout<<"NO";
    }
    else if(total>d)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}