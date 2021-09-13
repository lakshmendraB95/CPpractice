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
  ll n,k;
  cin>>n>>k;
  int arr[n];
  rep(i,n)
  {
      cin>>arr[i];
  }
  int count=0;
  rep(i,n)
  {
      while(i<n && arr[i]<arr[i+1])
      {
          count++;
          i++;
      }
  }
  if(count >= n-k+1)
  {
      cout<<"Yes";
  }
  else
  {
      cout<<"NO";
  }
    return 0;
}