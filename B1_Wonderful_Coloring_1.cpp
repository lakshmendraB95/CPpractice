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
        string s;
        int ans = 0 ;
        int c1=0;
        cin>>s;
        map<char , int > mp;
        rep(i,s.length())
        {
            mp[s[i]]++;
        }
        for(auto it: mp)
        {
            if(it.second>=2)
            {
                ans++;
            }
            else if(it.second == 1)
            {
                c1++;
            }
        }
        ans+=(c1/2);
        cout<<ans<<endl;
    }
    return 0;
}