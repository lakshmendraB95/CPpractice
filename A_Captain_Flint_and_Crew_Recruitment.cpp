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
 

int main()
{
    fast_cin();
   int t;
    cin >> t;

    while(t--){
        int n; 
        cin >> n;
        if(n <= 30)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            if(n == 36 || n == 40 || n == 44)
            {
                cout<<6<<' '<<10<<' '<<15<<' '<<n-31<<endl;
            }
            else
            {
                cout<<6<<' '<<10<<' '<<14<<' '<<n - 30<<endl;
            }
        }
    }
    return 0;
}