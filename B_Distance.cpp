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
    ll n,k;
    cin>>n>>k;
    double distance;
    ll a,b;
    int count=0;
    rep(i,n)
    {
        cin>>a>>b;
        a=pow(a,2);
        b=pow(b,2);
        distance = pow((a+b),0.5);
        if(distance<=k)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}