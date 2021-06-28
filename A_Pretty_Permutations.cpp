#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 1; i < e; i++)
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
        if(n%2)
        {
            cout<<3<<" "<<1<<" "<<2<<" ";
            for(int i = 4 ; i<=n ;i+=2)
            {
                cout<<i+1<<" "<<i<<" ";
            }
        }
        else
        {
            for(int i = 1 ; i<=n ; i+=2 )
            {
                cout<<i+1<<" "<<i<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}