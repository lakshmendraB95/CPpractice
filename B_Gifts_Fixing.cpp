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
    while(t--)
    {
        int n;
        cin>>n;
        ll sum=0;
        ll a[n],b[n];
        ll a_max,b_max;
        a_max=b_max=INT_MAX;
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]<a_max)
            {
                a_max=a[i];
            }
        }
        rep(i,n)
        {
            cin>>b[i];
            if(b[i]<b_max)
            {
                b_max=b[i];
            }
        }
        rep(i,n)
        {
            sum+= max((a[i]-a_max),(b[i]-b_max));
        }
        cout<<sum<<endl;
    }
    return 0;
}