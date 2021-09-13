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
 

int main()
{
    fast_cin();
  int n;
  cin>>n;
  vector <pair<int,int>> v;
  int a[n],b[n];
  rep(i,n)
  {
      cin>>a[i]>>b[i];
      v.push_back({a[i],b[i]});
  }
  int ans=-1;
  sort(v.begin(),v.end());
  rep(i,n)
  {
      if(ans<= v[i].second)
      {
          ans=v[i].second;
      }
      else
      {
          ans=v[i].first;
      }
  }
  cout<<ans<<endl;
    return 0;
}