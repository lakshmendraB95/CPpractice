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
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<=n ; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum=arr[0];
    int count=0;
    for(int i =1 ; i<n ; i++)
    {
        if(arr[i]>=sum)
        {
            sum+=arr[i];
        }
        else
        {
            count++;
        }
    }
    cout<<n-count;
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