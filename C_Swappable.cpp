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
    ll n;
    cin>>n;
    ll x;
    map<ll,ll> mp;
    rep(i,n)
    {
        cin>>x;
        mp[x]++;
    }
    int sum = 0;
    for(auto it: mp)
    {
        sum+= ((it.second)*(it.second -1))/2;
    }
    ll answer;
    answer = ((n)*(n-1))/2;
    cout<<answer-sum;
    return 0;
}