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
    ll n,m;
    ll o1,o2,e1,e2;
    o1=o2=e1=e2=0;
    cin>>n>>m;
    ll x;
    rep(i,n)
    {
        cin>>x;
        if(x%2)
        {
            o1++;
        }
        else
        {
            e1++;
        }
    }
    rep(i,m)
    {
        cin>>x;
        if(x%2)
        {
            o2++;
        }
        else
        {
            e2++;
        }
    }
    cout<<min(o1,e2)+min(o2,e1)<<endl;
    return 0;
}