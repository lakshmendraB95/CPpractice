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
    int t;
    cin>>t;
    ll a,b;
    rep(i,t)
    {
        cin>>a>>b;
        ll x = a*b*2;
        rep(j,143)
        {
            if(j*j>=x)
            {
                cout<<j*j<<endl;
                break;
            }
        }
    }
    return 0;
}