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
    ll t;
    cin >> t;
while(t--)
{
    ll n;
    cin>>n;
    ll a,b,c;
    a=-1,b=-1;
    for(int i = 2 ; i*i<n ;i++)
    {
        if(n%i==0)
        {
            a=i;
            n/=i;
            break;
        }
    }
   
    for(int i = 2 ; i*i<n ; i++)
    {
        if(i!=a && n%i==0)
        {
            b=i;
            n/=b;
            break;
        }
    }
  
   

        if(n!=a && n!=b && n!=1 && a>0 && b>0 && n>0)
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<n<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

 }
    return 0;
}