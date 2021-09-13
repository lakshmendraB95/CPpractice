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
   int n,m;
   cin>>n>>m;
   int arr[n];
   rep(i,n) cin>>arr[i];
   sort(arr,arr+n);
   int ans =0;
   rep(i,m)
   {
       if(arr[i]<=0)
       {
           ans-=arr[i];
       }
       else
       {
           break;
       }
   }
   cout<<ans;
    return 0;
}