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
    ll arr[n];
    ll o=0,e=0;
    rep(i,n)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<>());
    ll ans=0;
    rep(i,n)
    {
        if(i%2 && arr[i]%2)
        {
            ans-=arr[i];
        }
        else if(i%2==0 && arr[i]%2==0)
        {
            ans+=arr[i];
        }
    }
    if(!ans)
    {
        cout<<"Tie"<<endl;
    }
    else if(ans>0)
    {
        cout<<"Alice"<<endl;
    }
    else
    {
        cout<<"Bob"<<endl;
    }

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