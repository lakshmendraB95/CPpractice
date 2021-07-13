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
    int t;
    cin>>t;
    while(t--)
    {
        int g;
        cin>>g;
        while(g--)
        {
            int a,b,c;
            cin>>a>>b>>c;
            if(b%2==0)
            {
                cout<<b/2<<endl;
            }
            else
            {
                int n_change = b/2;
                int change = b- n_change;
                
                if(a==c)
                {
                    cout<<n_change<<endl;
                }
                else
                {
                    cout<<change<<endl;
                }
            }
        }
    }
    return 0;
}