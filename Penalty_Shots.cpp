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
    int x;
    int z1,z2;
    z1=0;
    z2=0;
    rep(i,10)
    {
        cin>>x;
        if(i%2)
        {
            if(x==0)
            {
                z1++;
            } 
        }
        else
        {
            if(x==0)
            {
                z2++;
            }
        }
    }
    if(z1<z2)
    {
        cout<<2<<endl;
    }
    else if(z2<z1)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
 }
    return 0;
}