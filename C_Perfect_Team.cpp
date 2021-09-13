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
    ll a,b,c;
    cin>>a>>b>>c;
    ll sum =max(a,b)-min(a,b);
    c+=sum;
    ll count=0;
    if(a>b)
    {
        a-=sum;
    }
    else
    {
        b-=sum;
    }
     count =min({a,b,c});
    a-=count;
    b-=count;
    c-=count;
    count+=((a+b))/3;
    cout<<count<<endl;
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