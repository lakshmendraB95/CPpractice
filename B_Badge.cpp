#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 1; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
 

int main()
{
    fast_cin();
    int n;
    cin>>n;
    int arr[n+1];
    arr[0]=-1;
    rep(i,n+1)
    {
        cin>>arr[i];
    }
    
    rep(i,n+1)
    {
         int x =i;
        set<int> s;
        while(s.count(x)!=1)
        {
            s.insert(x);
            x=arr[x];
            
        }
        cout<<x<<" ";
        s.clear();
    }
    return 0;
}