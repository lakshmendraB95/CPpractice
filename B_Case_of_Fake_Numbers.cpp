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
    int x;
    int y=0;
    set<int> s;
    rep(i,n)
    {
        cin>>x;
        if(!(i%2))
        {
            if(i<x)
            {
                y+=(n-1-x)+i+1;
            }
            else if(i>x)
            {
                y+=(i-x);
            }
        }
        else
        {
            if(i<x)
            {
                y+=(x-i);
            }
            else if(i>x)
            {
                y+=(x)+(n-i);
            }
            
        }
        s.insert(y);
        y=0;
    }
    if(s.size()!= 1)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
    return 0;
}