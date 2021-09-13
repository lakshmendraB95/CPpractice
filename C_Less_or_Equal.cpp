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
 
void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    rep(i,n) cin>>arr[i];
    sort(arr,arr+n);
    if(k==0)
    {
        if(arr[0]-1>=1)
        {
            cout<<arr[0]-1;
            return;

        }
        else
        {
            cout<<-1;
            return;
        }
    }
    if(k==n)
    {
        cout<<arr[n-1];
        return;
    }
    if(arr[k-1]!=arr[k])
    {
        cout<<arr[k-1];
    }
    else
    {
        cout<<-1;
    }
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