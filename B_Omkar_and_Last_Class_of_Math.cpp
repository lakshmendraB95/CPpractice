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

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
void solve()
{
    int n;
    cin>>n;
    if(isPrime(n))
    {
        cout<<1<<" " <<n-1<<endl;
    }
    else
    {
        if(!(n%2))
        {
            cout<<n/2<<" "<<n/2<<endl;
            return;
        }
        int ans1,ans2;
        for(int i=2;i*i<=n;i++)
        {
            if(n%(i)==0)
            {
                ans1=i;
                break;
            }
        }
        ans2=n/ans1;
        cout<<ans2<<" "<<n-ans2<<endl;
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