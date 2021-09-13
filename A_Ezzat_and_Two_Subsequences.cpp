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
    ll n;
    cin>>n;
    ll v[n];
    ll sum=0;
    rep(i,n)
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v,v+n);
    int x = v[n-1];
    double ans = x+(sum-x)/float(n-1);
    cout<<fixed<<setprecision(9)<<ans<<endl;

 }
    return 0;
}