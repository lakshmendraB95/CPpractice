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
#define min_v(v) *min_element(all_v(v));

ll x[200005];
ll y[200005];

vector <ll> arr[200005];
int vis[200005];

void build_graph(ll edges)
{
    int a,b;
    int i = 1;
    while(edges--)
    {
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
        x[i]=a;
        y[i]=b;
        i++;
    }
}
void dfs(int v)
{
    vis[v]=1;
    cout<<v<<" ";
    for(int child : arr[v])
    {
        if(!vis[child])
        {
            if(x[v]==child || y[v]==child)
            {
            dfs(child);
            }
        }
    }
}

int main()
{
    fast_cin();
    ll n;
    cin>>n;
    build_graph(n);
    
    dfs(1);
    return 0;
}