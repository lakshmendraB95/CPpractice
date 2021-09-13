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
    ll sum=0;
    ll x;
    set<int> s;
    rep(i,n)
    {
        cin>>x;
        sum+=x;
        s.insert(x);
    }
    if(s.size()==1 && n%2)
    {
        cout<<"NO";
        return;
    }
    if((sum/2)%100 || n<=1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
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