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
    int n;
    cin>>n;
    int a,b,c,d,p,q;
    cin>>a>>b>>c>>d>>p>>q;
    int flag=0;
    if((c<a && p<a) ||(c>a && p>a)) 
    {
        if((d<b && q<b) || (d>b && q>b))
    {
        flag=1;
    }
    }
    if(flag)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}