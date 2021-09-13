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
    int n,m,k;
    cin>>n>>m>>k;
    int r[5000],c[5000];
    int ans[100001]{0};
    for(int i = 1 ; i<=k ; i++)
    {
        int a,b;
        cin>>a>>b>>ans[i];
        if(a==1)
        {
            r[--b]=i;
        }
        else
        {
            c[--b]=i;
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int  j= 0 ; j<m ; j++)
        {
            cout<<ans[max(r[i],c[j])]<<" ";
        }
        cout<<endl;
    }
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