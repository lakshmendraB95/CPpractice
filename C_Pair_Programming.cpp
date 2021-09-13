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
    ll t;
    cin >> t;
while(t--)
{
    int k,n,m;
    cin>>k>>n>>m;
    int a[n],b[m];
    rep(i,n)
    {
        cin>>a[i];
    }
    rep(i,m)
    {
        cin>>b[i];
    }
    int ans[n+m];
    int i=0;
    int j=0;
    int y=0;
    int flag=0;
    while(i!=n || j!=m)
    {
        if(i!=n && a[i]==0)
        {
            ans[y++]=a[i++];
            k++;
        }
        else if(j!=m && b[j]==0)
        {
            ans[y++]=b[j++];
            k++;
        }
        else if(i!=n && a[i]<=k)
        {
            ans[y++]=a[i++];
        }
        else if(j!=m && b[j]<=k)
        {
            ans[y++]=b[j++];
        }
        else
        {
            flag =1;
            break;
        }
    }
    if(flag)
    {
        cout<<-1<<endl;
    }
    else
    {
     rep(x,m+n)
     {
         cout<<ans[x]<<" ";
     }
     cout<<endl;
    }
 }
    return 0;
}