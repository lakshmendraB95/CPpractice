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
 
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag=false;
    char x;
    int count=0;
    for(int i = 0 ; i<n ; i++)
    {
        if(s[i]!='F' && !flag)
        {
            flag = true;
            x=s[i];
        }
        if(s[i]!=x && flag && s[i]!='F')
        {
            count++;
            x=s[i];
        }
    }
    cout<<count<<endl;
}

int main()
{
    fast_cin();
   ll t;
    cin >> t;
    for(int i = 1 ; i<=t ;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
    }
 // solve();
    return 0;
}


