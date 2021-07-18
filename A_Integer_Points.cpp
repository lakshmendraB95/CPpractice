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
        int n;
        cin>>n;
        ll x;
        ll o1,e1,o2,e2;
        o1=o2=e1=e2=0;
        rep(i,n)
        {
          cin>>x;
          if(x%2)
          {
              o1++;
          } 
          else
          {
              e1++;
          }
        }
        int m;
        cin>>m;
        rep(i,m)
        {
            cin>>x;
            if(x%2)
          {
              o2++;
          } 
          else
          {
              e2++;
          }
        }
        ll answer=0;
        answer+= o1*o2;
        answer+=e1*e2;
        cout<<answer<<endl;
    }
    return 0;
}