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
    string s;
    cin>>s;
    int count=0;
    int m=0;
    rep(i,3)
    {
        if(s[i]=='R')
        {
            count++;
            m=max(m,count);
        }
        else
        {
            count=0;
        }
    }
    cout<<m;
    return 0;
}