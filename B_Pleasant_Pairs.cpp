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
    vector<pair<int,int> > v;
    int x;
    rep(i,n)
    {
        cin>>x;
        v.push_back({x,i+1});
    }
    sort(v.begin(),v.end());
    int count=0;
    for(int i = 0 ; i<n ; i++)
    {
        int flag = 0;
        for(int j = i+1 ; j<n ; j++)
        {
            ll a= v[i].first*v[j].first;
            if( a <= n+n-1)
            {
                if(v[i].second+v[j].second == a)
                {
                    count++;
                }
                flag=1;
            }
            else
            {
                break;
            }
        }
        if(!flag)
        {
            break;
        }
    }
    cout<<count<<endl;
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