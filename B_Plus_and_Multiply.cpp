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
vector <int> v;
 bool search(ll n , ll a, ll b , ll x)
 {
    
    if(x>n)
    {
        return false;
    }
     else
     {
         v.push_back(x);
         search(n,a,b,x+b);
         search(n,a,b,x*a);
     }
 }

int main()
{
    fast_cin();
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>n>>a>>b;
        ll x =1;
        search(n,a,b,x);
        int count = 0;
        for(auto &it :v)
        {
            if(it==n)
            {
                count=1;
            }
        }
        v.clear();
        if(count)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}