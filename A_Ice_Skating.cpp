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
set<int> s;
int x[100],y[100];
void dfs(int v,int n)
{
    vis[v]=1;
    rep(i,n)
    {
        if((x[v]==x[i] || y[v]==y[i]) && !vis[i])
        {
            dfs(i,n);
        }
    }
}

int main()
{
    fast_cin();
    int t;
    cin>>t;
    int count  =0 ;
    rep(i,t)
    {
        cin>>x[i]>>y[i];
    }
    rep(i,t)
    {
        if(!vis[i])
        {
            dfs(i,t);
            count++;
        }
    }
    cout<<count -1;
    return 0;
}