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
    map<int,int> mp;
    int ans=0;
    int a = 0;
    int x;
    rep(i,n)
    {
        cin>>x;
        mp[x]++;
    }
    for(auto &it : mp)
    {
        ans+=it.second/it.first;
        it.second%=it.first;
    }
    for(auto &it : mp)
    {
        a+=it.second;
        // cout<<it.first<<" "<<it.second<<endl;
        if(it.second>=1 && it.first<=a)
        {
        ans+=((a)/it.first);
        it.second%= (a/it.first);
        a%=it.first;
        a+=it.second;
        }
    }
    // cout<<a<<endl;
    cout<<ans<<endl;
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