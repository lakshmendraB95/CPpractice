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
   rep(i,n)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
//    rep(i,n)
//    {
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
    int ans[n];
    int j=(n-1)/2;
    ans[0]=arr[j];
    int k,l;
    k=l=1;
    for(int i = 1 ; i< n ; i++)
    {
        if(i%2==0)
        {
        if(j-k>=0)
        {
        ans[i]=arr[j-k];
        k++;
        }
        else
        {
            ans[i]=arr[j+l];
            l++;
        }
      }
        else
        {
            ans[i]=arr[j+l];
            l++;
        }

    }
     rep(i,n)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
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