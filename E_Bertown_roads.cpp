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
int vis[100001];
int low[1000001],in[1000001];
int timer;

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
vector<pair<int,int> > answer;
bool flag = false;
void dfs(int node , int p)
{
  vis[node]=1;
  low[node]=in[node]=timer;
  timer++;
  for(int child : arr[node])
  {
    if(child == p)
    {
      continue;
    }
    if(vis[child])
    {
      low[node] = min(low[node],in[child]);
      if(in[node]>in[child])
      {
          answer.push_back(make_pair(node,child));
      }
    }
    else
    {
      dfs(child,node);
      if(low[child]>in[node])
      {
        flag = true;
        return;
      }
      answer.push_back(make_pair(node,child));
      low[node]= min(low[child],low[node]);
    }
  }
}
int main()
{
    fast_cin();
    int n,m;
    cin>>n>>m;
    build_graph(m);
    dfs(1,-1);
    if(flag)
    {
        cout<<0;
    }
    else
    {
    for(auto it : answer)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    }
    return 0;
}