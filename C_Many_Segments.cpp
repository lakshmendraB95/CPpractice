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
    ll t;
    cin>>t;
    ll count =0;
    ll br[t],cr[t];
    rep(i,t)
    {
        ll a,b,c;
        ll mn=INT_MAX,mx=0;
        cin>a>>b>>c;
        
        if(a==2)
        {
            c--;
        }
        else if(a==3)
        {
            b++;
        }
        else if(a==4)
        {
            c--;
            b++;
        }
        if(b<mn)
        {
            mn=b;
        }
        if(c>mx)
        {
            mx=c;
        }
        br[i]=b;
        cr[i]=c;
    }
    rep(i,t)
{
    if(br[i] )
}
    return 0;
}