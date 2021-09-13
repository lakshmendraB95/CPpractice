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
    ll arr[n];
    rep(i,n)
    {
        cin>>arr[i];
    }
    ll mp=0;
    ll sump=0;
    ll sumn=0;
    ll mn= INT32_MIN;
   rep(i,n)
    {
        if(arr[i]>=0)
        {
            if(mn!=INT32_MIN)
            {
                sumn+=mn;
                mn=INT32_MIN;
            }
            mp=max(arr[i],mp);
        }
        else{
            sump+=mp;
            mp=0;
            mn=max(arr[i],mn);
        }
    }
    sump+=mp;
    if(mn!=INT32_MIN)
    {
    sumn+=mn;
    }
    cout<<sump+sumn<<endl;
 }
    return 0;
}