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
    int arr[n+1];
    arr[0]=0;
    for(int i =1 ; i<=n ; i++)
    {
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    int i=0,j=n;
    bool flag=false;
    int ans1=0;
    while(i<j)
    {
        if((arr[j]-arr[i])%k)
        {
            ans1=j-i;
            flag=true;
            break;
        }
        else if((arr[j-1]-arr[i])%k)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    i=0;
    j=n;
    int ans2=0;
    while(i<j)
    {
        if((arr[j]-arr[i])%k)
        {
            ans2=j-i;
            flag=true;
            break;
        }
        else if((arr[j]-arr[i+1])%k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    if(flag)
    {
    cout<<max(ans1,ans2)<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
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