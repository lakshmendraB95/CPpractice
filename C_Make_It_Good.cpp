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

int bitonic(int arr[], int n)
{
    
    int x = n-1;
    int count=0;
     while(x>0 && arr[x]<=arr[x-1])
    {
        x--;
        count++;
    }
    while(x>0 && arr[x]>=arr[x-1])
    {
        x--;
        count++;
    }
    return count+1;
}
 
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    rep(i,n)
    {
        cin>>arr[i];
    }
    
    cout<<n-bitonic(arr,n)<<endl;
}

int main()
{
    fast_cin();
   ll t;
    cin >> t;
 while(t--)
 {
 solve();
  }
 // solve();
    return 0;
}