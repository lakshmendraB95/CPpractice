#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all_v(x) (x).begin(), (x).end()
#define all_a(a,n) a, a+n
#define max_a(a,n) *max_element(all_a(a,n));
#define min_a(a,n) *min_element(all_a(a,n));
#define max_v(v) *max_element(all_v(v));
#define min_v(v) *min_element(all_v(v));
 

int main()
{
    fast_cin();
    int n,m;
    cin>>n>>m;
    ll arr[n];
    ll sum = 0,j=0 ;
    rep(i,n)
    {
        cin>>arr[i];
    }
    ll x;
    rep(i,m)
    {
        cin>>x;
        x=x-sum;
        while(x>arr[j])
        {
            sum+=arr[j];
            x-=arr[j];
            j++;
        }
        cout<<j+1<<" "<<x<<endl;
    }
    return 0;
}