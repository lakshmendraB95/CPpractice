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


vector <int> arr[100001];
int vis[10001];

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
void dfs(int v,ll &count)
{
    vis[v]=1;
    count++;
    for(int child : arr[v])
    {
        if(!vis[child])
        {
            dfs(child,count);
        }
    }
}

int main()
{
    fast_cin();
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        ll ans1=0;
        ll ans2=1;
        for(int i =1 ;i<=n ; i++)
        {
            arr[i].clear();
            vis[i]=0;
        }
        build_graph(m);
        for(int i = 1 ; i<=n ; i++)
        {
            if(!vis[i])
            {
                ans1++;
                ll count = 0;
                dfs(i,count);
                ans2*=count;
            }
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
    return 0;
}