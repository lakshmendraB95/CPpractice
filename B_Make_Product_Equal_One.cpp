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
    int n;
    cin>>n;
    int neg =0;
    int z = 0 ;
    ll sum =0;
    int x;
    rep(i,n)
    {
        cin>>x;
        sum+=min(abs(x-1),abs(x+1));
        if(x<0)
        {
            neg++;
        }
        else if(x==0)
        {
            z++;
        }
    }
    if(neg%2 && !z)
    {
        sum+=2;
    }
    cout<<sum;
    return 0;
}