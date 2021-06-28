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
    int n;
    cin>>n;
    long long a,b,x;
    ll sum=0;
    rep(i,n)
    {
        cin>>a>>b;
        x=(b-a)+1;
        if(x%2)
        {
            sum+= (x*((b+a)/2));
        } 
        else
        {
            sum+= ((x/2)*(a+b));
        }
    }
    cout<<sum;
    return 0;
}