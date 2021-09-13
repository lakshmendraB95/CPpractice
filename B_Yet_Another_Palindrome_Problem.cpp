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
    vector<int> v;
    int x;
    map<int,int> mp;
    rep(i,n)
    {
        cin>>x;
        v.push_back(x);
        mp[x]++;
    }
    for(auto it: mp)
    {
        if(it.second>=3)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    int count=0;
    rep(i,n)
    {
        for(int  j = i+2  ; j<n ; j++)
        {
            if(v[i]==v[j])
            {
                count++;
            }
        }
    }
    if(count)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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