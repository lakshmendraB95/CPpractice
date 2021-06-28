#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 2; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
 

int main()
{
    fast_cin();
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       int arr[n];
       for(int i= 0 ; i<n ;i++)
       {
           cin>>arr[i];
       }
       sort(arr,arr+n);
       int sum=0;
       rep(i,n)
       {
           sum+=arr[i-2];
       }
       int neg = 0;
       rep(i,n)
       {
           neg -= (arr[i]*(i-1));
       }
       cout<<sum+neg<<endl;
    }
    
    return 0;
}