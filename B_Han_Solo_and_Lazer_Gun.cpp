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
    int n, x1,y1;
    cin>>n>>x1>>y1;
    set<double> s;
    bool flag=false;
    rep(i,n)
    {
        int x2,y2;
        cin>>x2>>y2;
        if (x2-x1==0)
        {
            flag=true;
        }
        else
        {
        double x = (y2-y1)/double(x2-x1);
        // cout<<x<<endl;
        s.insert(x);
        }
    }
    int ans=s.size();
    if(flag)
    {
        cout<<ans+1<<endl;
        return;
    }
    cout<<ans<<endl;
}

int main()
{
    fast_cin();
   // ll t;
    //cin >> t;
 //while(t--)
 // {
 // solve();
  //}
 solve();
    return 0;
}