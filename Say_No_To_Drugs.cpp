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
    int n,k,l;
    cin>>n>>k>>l;
    ll arr[n];
    rep(i,n)
    {
        cin>>arr[i];
    }
    if(n==1)
    {
        cout<<"Yes"<<endl;
        return;
    }
    ll x=arr[n-1];
    sort(arr,arr+n-1,greater<>());
   if(k>1 && l>1)
   {
       x+=(l-1)*k;
       if(x>arr[0])
       {
           cout<<"Yes"<<endl;
           return;
       }
       else
       {
           cout<<"No"<<endl;
           return;
       }
   }
    if(x>arr[0])
    {
        cout<<"Yes"<<endl;
        return;
    }
    else
    {
        cout<<"No"<<endl;
        return;
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