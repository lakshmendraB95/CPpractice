#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
#define MOD 1000000009;
#define rep(i,e) for(ll i = 1; i <= e; i++)
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
        ll n;
        cin>>n;
        ll sum =0 ;
        n=n%MOD;
        if (n ==1)
        {
            cout<<2<<endl;
        }
        else
        {
        rep(i,n)
        {
            if(i%2)
            {
                sum+=2;
            }
            else if(!i%6)
            {
                ll x = i/6;
                if(x%2)
                {
                    sum+=4;
                }
                else
                {
                    sum+=5;
                }
            }
            else
            {
                sum+=3;
            }
             sum= sum%MOD;
        
        }
        cout<<sum<<endl;
        }
        
    }
    return 0;
}