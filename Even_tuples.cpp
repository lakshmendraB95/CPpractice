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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        int arr[n];
        ll even[n+1];
        ll odd[n+1];
        even[0]=0;
        odd[0]=0;
        for(int i =1 ;i<=n ;i++)
        {
            cin>>arr[i];
        }
        ll count =0;
        for(int  i = 1 ; i<= n ; i++)
        {
            if(arr[i]%2==0)
            {
                ++count;
            }
            even[i]=count;
        }
        count = 0;
        for(int  i = 1 ; i <= n ; i++)
        {
            if(arr[i]%2)
            {
                count++;
            }
            odd[i]=count;
        }
        ll l,r;
        rep(i,q)
        {
            cin>>l>>r;
            ll o=odd[r]-odd[l-1];
            ll e=even[r]-even[l-1];
             ll ans=((o*(o-1))/2)*e + (e*(e-1)*(e-2))/6;
            cout<<ans<<endl;
        }
    }
    return 0;
}