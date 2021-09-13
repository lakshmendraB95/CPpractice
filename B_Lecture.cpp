#include <bits/stdc++.h>  
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mod               1000000007
#define modadd(a,b,c)     ((a%c)+(b%c))%c
#define modmul(a,b,c)     ((a%c)*(b%c))%c
#define modsub(a,b,c)     ((a%c)-(b%c))%c
 

int main()
{
    fast_cin();
    int m,n;
    cin>>n>>m;
    string a,b;
    map<string,string> mp;
    rep(i,m)
    {
        cin>>a>>b;
        mp[a]=b;
    }
    for(int i = 0 ; i<n ; i++)
    {
        cin>>a;
        if(mp[a].length()<a.length())
        {
            cout<<mp[a]<<" ";
        }
        else
        {
            cout<<a<<" ";
        }
    }
    return 0;
}