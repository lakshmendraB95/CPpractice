#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
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
       int n,x;
       cin>>n;
       int arr[n];
       int j=0;
       set<int> s;
       rep(i,2*n)
       {
           cin>>x;
           if(!s.count(x))
           {
            arr[j++]=x;
            s.insert(x);
           }
       }
       rep(i,n)
       {
           cout<<arr[i]<<" ";
       }
       cout<<endl;
    }
    
    return 0;
}