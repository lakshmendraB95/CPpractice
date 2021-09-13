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
    ll a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    ll m=n;
    ll p,q,r,s;
    p=r=a;
    q=s=b;
    int i = 0;
    
    p-=min(p-x,n);
    n-=min(r-x,n);
    q-=min(q-y,n);
    ll ans1=p*q;
    p=a;
    q=b;
    n=m;
     q-=min(q-y,n);
    n-=min(s-y,n);
    p-=min(p-x,n);
 
    ll ans2= p*q;
    // cout<<p<<" "<<q<<endl;
    cout<<min(ans1,ans2)<<endl;
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