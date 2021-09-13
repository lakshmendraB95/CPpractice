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
    vector<int> ans;
    int k=0;
    cin>>s;
    int index=-1;
    bool flag=false;
    rep(i,n)
    {
        if(s[i]=='1')
        {
            flag=true;
        }
        if(s[i]=='0' && flag)
        {
            index=i;
        }
        else if(s[i]=='0'&&!flag)
        {
            ans.push_back(0);
        }
    }
    if(index==-1)
    {
        cout<<s<<endl;
    }
    else
    {
        rep(i,ans.size())
        {
            cout<<ans[i];
        }
       cout<<s.substr(index,n-index)<<endl;
    }
}

int main()
{
    fast_cin();
   ll t;
    cin >> t;
 while(t--)
 {
 solve();
  }
 // solve();
    return 0;
}