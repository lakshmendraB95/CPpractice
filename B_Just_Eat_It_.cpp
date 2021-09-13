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


ll maxSubArraySum(ll a[], ll size)
{
    ll max_so_far = INT_MIN, max_ending_here = 0,
       start =0, end = 0, s=0;
 
    for (ll i=0; i< size; i++ )
    {
        max_ending_here += a[i];
 
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }
 
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
            s = i + 1;
        }
    }
    return max_so_far;
}
 
void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll x[n-1],y[n-1];
    ll sum=0;
    for(ll i = 0 ; i< n ; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    rep(i,n-1)
    {
        x[i]=arr[i];
    }
    int j=0;
    for(int i =1 ; i<n ; i++)
    {
        y[j++]=arr[i];
    }
    ll sum1=0,sum2=0;
    sum1=maxSubArraySum(y,n-1);
    sum2=maxSubArraySum(x,n-1);
    // cout<<sum1<<" "<<sum2<<endl;
    sum1=max(sum1,sum2);
    // cout<<sum<<endl;
    if(sum>sum1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main()
{
    fast_cin();
   ll t;
    cin >> t;
 while(t--)
 {
 solve();
  }
 // solve();
    return 0;
}