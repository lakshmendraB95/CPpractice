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
    ll a[n+1],b[n+1];
    a[0]=0;
    b[0]=0;
    for(int i = 1 ; i<= n ; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+(n+1));
    // rep(i,n+1)
    // {
    //     cout<<b[i]<<" ";
    // }
    for(int i = 1 ; i<=n ; i++)
    {
        a[i]+=a[i-1];
        b[i]+=b[i-1];
    }
    // rep(i,n+1)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;

    // rep(i,n+1)
    // {
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;

    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        y--;
        if(x==1)
        {
            cout<<a[z]-a[y]<<endl;
        }
        else if(x==2)
        {
            // cout<<b[z]<<" "<<b[y]<<endl;
            cout<<b[z]-b[y]<<endl;
        }
    }

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