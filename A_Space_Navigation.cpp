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
    int x,y;
    cin>>x>>y;
    string dir;
    cin>>dir;
    int a =0;
    int b=0;
    rep(i,dir.length())
    {
        if(x>0)
        {
            if(dir[i]=='R' && a<x)
            {
                a++;
            }
        }
        else
        {
            if(dir[i]=='L' && a>x)
            {
                a--;
            }
        }
        if(y>0)
        {
            if(dir[i]=='U' && b<y)
            {
                b++;
            }
        }
        else
        {
            if(dir[i]=='D' && b>y)
            {
                b--;
            }
        }
    }
    if(a==x && b==y)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
 }
    return 0;
}