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
    int a,b,c;
    cin>>a>>b>>c;
    if(a%c==0)
    {
        a=a/c;
    }
    else
    {
        a=a/c;
        a++;
    }
    if(a<=b)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}