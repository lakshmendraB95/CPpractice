#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 1; i <= e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all_v(x) (x).begin(), (x).end()
#define all_a(a,n) a, a+n
#define max_a(a,n) *max_element(all_a(a,n));
#define min_a(a,n) *min_element(all_a(a,n));
#define max_v(v) *max_element(all_v(v));
#define min_a(v) *min_element(all_v(v));

ll nodes =10000;
vector <int> arr[nodes+1];
int vis[nodes+1];

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
    ll n,m;
    cin>>n>>m;
    build_graph(m);
    int cc=0;
    rep(i,n)
    {
        if(!vis[i])
        {
            dfs(i);
            cc++;
        }
    }
    cout<<cc;
    return 0;
}