#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i <e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all_v(x) (x).begin(), (x).end()
#define all_a(a,n) a, a+n
#define max_a(a,n) *max_element(all_a(a,n));
#define min_a(a,n) *min_element(all_a(a,n));
#define max_v(v) *max_element(all_v(v));
#define min_v(v) *min_element(all_v(v));


vector <int> arr[200001];
int vis[200001];

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
    sort(arr[v].begin(),arr[v].end());
    for(int child : arr[v])
    {
        if(!vis[child])
        {
            cout<<v<<" ";
            dfs(child);
        }
    }
    cout<<v<<" ";
}

int main()
{
    fast_cin();
    int t;
    cin>>t;
    build_graph(t-1);
    for(int i =1 ; i<=t ; i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    return 0;
}