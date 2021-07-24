#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all_v(x) (x).begin(), (x).end()
#define all_a(a,n) a, a+n
#define max_a(a,n) *max_element(all_a(a,n));
#define min_a(a,n) *min_element(all_a(a,n));
#define max_v(v) *max_element(all_v(v));
#define min_v(v) *min_element(all_v(v));


vector <int> arr[100001];
int vis[100001];

void build_graph(ll edges)
{
    int a,b;
    while(edges--)
    {
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
}
void dfs(int v)
{
    vis[v]=1;
    for(int child : arr[v])
    {
        if(!vis[child])
        {
            dfs(child);
        }
    }
}

int main()
{
    fast_cin();
    int n,m;
    cin>>n>>m;
    ll arr[n+1];
    ll sum = 0;
    ll x;
    vector<pair<ll,ll> > mp;
    for(int i = 1 ; i<=n ; i++)
    {
        cin>>x;
        mp.push_back(make_pair(x,i));
    }
    sort(mp.begin(),mp.end());
    build_graph(m);
    for(auto &it : mp)
    {
        if(!vis[it.second])
        {
            sum+= it.first;
            dfs(it.second);
        }
    }
    cout<<sum;
    return 0;
}