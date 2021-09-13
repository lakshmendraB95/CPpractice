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
    ll n,k;
    cin>>n>>k;
    for(int i = 0  ; i<k-1 ; i++)
    {
        ll smallest=9;
        ll largest=0;
        ll x=n;
        while(x)
        {
            ll r = x%10;
            largest= max(largest,r);
            smallest= min(smallest,r);
            x/=10;
        }
        if(smallest == 0 || largest ==0)
        {
            cout<<n<<endl;;
            return;
        }
        n+=(smallest*largest);
    }
    cout<<n<<endl;
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