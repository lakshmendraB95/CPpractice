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
    string s,r;
    cin>>s>>r;
    int n=s.length();
    int x= r.length();
    int m=0,count=0;
    int ans =x;
    rep(i,(n-x+1))
    {
        int diff=0;
        rep(j,x)
        {
            if(s[i+j]!=r[j])
            {
                diff++;
            }
        }
        ans=min(diff,ans);
    }
    cout<<ans;
    return 0;
}