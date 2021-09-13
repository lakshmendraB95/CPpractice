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
    int n,k;
    cin>>n>>k;
    int arr[n];
    set<int> s;
    rep(i,n)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }
    if(s.size()>k)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<n*k<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        for(auto it: s)
        {
            cout<<it<<" ";
        }
        for(int j = 0 ; j<k-int(s.size());j++)
        {
            cout<<1<<" ";
        }
    }
    cout<<endl;
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