#include <bits/stdc++.h>
 
 
#define loop(a,b,c)       for(int a=b;a<c;a++)
#define loopr(a,b,c)      for(int a=b;a>c;a--)
#define nl                ("\n")
#define gcd(a,b)          __gcd(a,b)
#define int               long long
#define vi                vector<int>
#define vb                vector<bool>
#define vs                vector<string>
#define pb(n)             push_back(n)
#define mp(a,b)           make_pair(a,b)
#define ff                first
#define ss                second             
#define sz(s)             s.size()
#define google(T)         cout<<"Case #"<<T<<": "
#define testcases         int t; cin>>t; loop(i,1,t+1) solve(i)
#define mod               1000000007
#define modadd(a,b,c)     ((a%c)+(b%c))%c
#define modmul(a,b,c)     ((a%c)*(b%c))%c
#define modsub(a,b,c)     ((a%c)-(b%c))%c
#define all(v)            (v).begin(),(v).end()
 
using namespace std;
 
 
void RUN()
{
  ios::sync_with_stdio(0); 
  cin.tie(0); 
  cout.tie(0);
}
 
void sieve(int n);
int power(int a,int n);
 
vector<vector<int> > graph(200000);
vb vis(200000);
int d[200000];
int n,m;
int p[200000];
vi path;
 
void bfs()
{   
    p[0]=1;
    vis[0]=1;
    d[0]=0;
 
    queue <int> q;
    q.push(0);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
 
        for (auto child : graph[node])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
            }
 
            if (d[child] > d[node] + 1)
            {
                d[child] = d[node] + 1;
                p[child] = p[node];
            }
            else if (d[child] == d[node] + 1) 
            p[child] = modadd(p[child],p[node],mod);
        }
    }    
}
 
void solve(int T)
{
    cin>>n>>m;
    loop(i,0,n)
    {
        graph[i].clear();
        d[i]=LLONG_MAX;
        vis[i]=0;
        p[i]=0;
    }
 
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        --a;--b;
 
        graph[a].pb(b);
        graph[b].pb(a);
    }
    bfs();
    cout<<p[n-1]<<nl;
}
 
 
signed main()
{
  RUN();
 
 
//   testcases;
  solve(1);
 
 
  return 0;
}