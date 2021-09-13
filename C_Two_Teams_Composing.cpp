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
    int n;
    cin>>n;
    set<int> s;
    map<int,int> mp;
    int x;
    rep(i,n)
    {
        cin>>x;
        mp[x]++;
        s.insert(x);
    }
    if(n==1)
    {
        cout<<0<<endl;
    }
    else
    {
    int count=0,mx=0;
    rep(i,n+1)
    {
        mx=max(mx,mp[i]);
        if(mp[i]==0)
        {
            count++;
        }
    }
    cout<<max(min(mx-1,n+1-count),min(mx,n-count))<<endl;
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