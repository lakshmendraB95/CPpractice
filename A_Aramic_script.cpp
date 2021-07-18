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
    int count =0;
    map<set<char>,ll> q;
    rep(i,n)
    {
        string s;
        cin>>s;
        set<char> a;
        int c =0;
        rep(i,s.length())
        {
            a.insert(s[i]);
        }
        if(q[a]==0)
        {
            count++;
        }
        q[a]++;
    }
    cout<<count;
    return 0;
}