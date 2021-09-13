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
   int arr[n];
    int count=0;
    rep(i,n)
    {
        cin>>arr[i];
    }
    while(count<n && arr[count]==1)
    {
        count++;
    }
    if(count==n ^ count%2)
    {
        cout<<"Second"<<endl;
    }
    else
    {
        cout<<"First"<<endl;
    }
 }
    return 0;
}