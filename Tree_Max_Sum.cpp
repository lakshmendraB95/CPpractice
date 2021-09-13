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
 
 vector <int> arr[1001];
int vis[1001];
int dis[1001];

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

void BFS(int node)
{
queue<int> q;
q.push(node);
vis[node]=1;
dis[node]=0;
while(!q.empty())
{
 int curr = q.front();
  q.pop();
  for(int child: arr[curr])
  {
    if(!vis[child])
    {
      q.push(child);
      dis[child]=dis[curr]+1;
      vis[child]=1;
    }
  }
}
}
int input[1001];
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while(t--)
 {
     set<int> v;
     ll n,k,h;
     cin>>n>>k>>h;
     for(int  i =1 ; i<=1000; i++)
     {
         input[i]=0;
         vis[i]=0;
         dis[i]=0;
         arr[i].clear();
     }
     for(int i =1 ; i<=n ; i++)
     {
         cin>>input[i];
     }
     build_graph(n-1);
     BFS(1);
     for(int i=1 ; i<=n ;i++)
     {
         for(int j=1 ;j<=n ; j++)
         {
             if(i!=j)
             {
                 if(abs(dis[i]-dis[j])>=h)
                 {
                     v.insert(input[i]);
                     v.insert(input[j]);
                 }
             }
         }
     }
     for(auto it: v)
     {
         cout<<it<<" ";
     }
     cout<<endl;
    /*ll sum=0;
    for(int i = v.size()-1; i>=v.size()-h ; i--)
    {
        sum+=v[i];
    }
    cout<<sum<<endl;
    */
 }
    return 0;
}