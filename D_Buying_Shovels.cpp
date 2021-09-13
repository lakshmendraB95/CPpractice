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
   int t;
   cin>>t;
   while(t--)
   {
       int n,k;
       cin>>n>>k;
       if(n%k==0)
       {
           cout<<n/k<<endl;
       }
       else if(k>=n)
       {
           cout<<1<<endl;
       }
       else
       {
           vector<int> ans;
           for(int i = 1 ; i*i<=n  ;i++)
           {
               if(n%i==0)
               {
                   ans.push_back(i);
                   ans.push_back(n/i);
               }
           }
           sort(ans.begin(),ans.end(),greater<>());
           for(auto it :ans)
           {
               if(it<=k)
               {
                   cout<<n/it<<endl;
                   break;
               }
           }
       }
   }
    return 0;
}