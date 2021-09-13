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

int n,m;
int arr[201][201];
 int minPath(int i,int j)
        {
        if(i>n-1 || j>m-1)
        {
            return INT32_MAX;
        }
        else if(i==n-1 && j==m-1)
        {
            return arr[i][j];
        }
        else
        {
            return arr[i][j] + min(minPath(i+1,j),minPath(i,j+1));
        }
        }
 
void solve()
{
    cin>>n>>m;
    rep(i,n)
    {
        rep(j,m)
        {
            cin>>arr[i][j];
        }
    }
    cout<<minPath(0,0);

}

int main()
{
    fast_cin();
   // ll t;
    //cin >> t;
 //while(t--)
 // {
 // solve();
  //}
 solve();
    return 0;
}