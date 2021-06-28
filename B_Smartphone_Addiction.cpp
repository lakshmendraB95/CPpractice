#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
 

int main()
{
    fast_cin();
    int n,m,t;
    cin>>n>>m>>t;
    int y=n;
    int a[m],b[m];
    int sum=0;
    rep(i,m)
    {
        cin>>a[i]>>b[i];
        if(i)
        {
        int x=a[i]-b[i-1];
        if(n<=x)
        {
            cout<<"No";
            return 0;
        }
        n-=x;
        n+=(b[i]-a[i]);
        n = min(y,n);
        }
        else
        {
            if(n<=a[i])
            {
                cout<<"No";
                return 0;
            }
            n-=a[i];
            n+=(b[i]-a[i]);
            n = min(y,n);
        }
    }
    t-=b[m-1];
    if(n>t)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}