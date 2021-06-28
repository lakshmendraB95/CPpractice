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
    int n,k;
    cin>>n>>k;
    int d;
    int count=0;
    map<int,int> mp;
    int x;
    rep(i,n)
    {
        cin>>d;
        rep(j,d)
        {
            cin>>x;
            mp[x-1]++;
        }
    }
    rep(i,n)
    {
        if(mp[i]==0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}