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
   
    rep(i,n)
    {
        cin>>arr[i];

    }
   
    map<int,int> mp;
    rep(i,n)
    {
        mp[arr[i]]++;
    }
    int ans1=0;
    int ans2 =0;
    int ans=0;
    for(int i =1 ;i<=2*n ;i++)
    {
        ans1=0;
    for(auto it: mp)
    {
        ans2 = i - it.first;
        if(ans2>=1 && mp[ans2]>0)
        {
            ans1+=min(it.second,mp[ans2]);
        }
    }
    ans1/=2;
        ans=max(ans1,ans);
    }
     cout<<ans<<endl;
 }
    return 0;
}