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
int result=0;
vector<int> roots;

void dfs(int v , int d)
{
    vis[v]=1;
    result=max(result,d);
    for(int child : arr[v])
    {
        if(!vis[child])
        {
            dfs(child,d+1);
        }
    }
}

int main()
{
    fast_cin();
    int n;
    cin>>n;
    ll x;
    for(int i = 1 ; i<=n ; i++)
    {
        cin>>x;
        if(x!=-1)
        {
            arr[x].push_back(i);
        }
        else
        {
            roots.push_back(i);
        }
    }
    for(int i = 0 ; i<roots.size(); i++)
    {
        dfs(roots[i],1);
    }
    cout<<result;
    return 0;
}