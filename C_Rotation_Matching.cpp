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
    int x;
    vector<pair<int,int> > a,b;
    rep(i,n)
    {
        cin>>x;
        a.push_back({x,i+1});
    }
    rep(i,n)
    {
        cin>>x;
        b.push_back({x,i+1});
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    map<int,int> mp;
    int count=0;
    for(int i = 0  ; i<n ; i++)
    {
        int x=a[i].second-b[i].second;
        if(x>0)
        {
            mp[-x]++;
            mp[n-x]++;
        }
        else if(x<0)
        {
            mp[-x]++;
            mp[-(n+x)]++;
        }
        else
        {
            mp[0]++;
        }
    }
    int ans=0;
    for(auto it:mp)
    {
        if(it.second>=ans)
        {
            ans=it.second;
        }
    }
    cout<<ans<<endl;
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