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
    int n,k;
    cin>>n>>k;
    ll arr[n];
    rep(i,n)
    {
        cin>>arr[i];
    }
    ll sum=0;
    ll m = LLONG_MAX;
    int index = 0;
    rep(i,k)
    {
        sum+=arr[i];
    }
    if(sum<m)
    {
        m=sum;
    }
    for(int i = 1 ; i<=n-k ;i++)
    {
        sum-= arr[i-1];
        sum+=arr[i+k-1];
        if(sum<m)
        {
            m=sum;
            index = i;
        }
    }
    cout<<index+1;
    return 0;
}