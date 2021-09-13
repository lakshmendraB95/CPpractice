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
    int n;
    cin>>n;
    int a[n],b[n];
    rep(i,n)
    {
        cin>>a[i]>>b[i];
    }
        bool flag = true;
        int x =a[0];
        int y = b[0];
        if(y>x && n==1)
        {
            flag = false;
        }
        else
        {
        for(int i =1  ;i<n ; i++)
        {
            if(a[i]-x < b[i]-y)
            {
                flag = false;
            }
            else if((b[i]>y || b[i]<y) && (a[i]<x || a[i]==x))
            {
                flag = false;
            }
            else if(a[i]<x || b[i]<y || y>x || b[i]>a[i])
            {
                flag = false;
            }
            x=a[i];
            y=b[i];
        }
        }
        if(flag)
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