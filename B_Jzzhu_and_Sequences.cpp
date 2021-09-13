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
 
void solve()
{
 int a,b;
 cin>>a>>b;
 int n;
 cin>>n;
 if(a<0)
 {
     a+=mod;
 }
 if(b<0)
 {
     b+=mod;
 }
 
 vector<int> v;
 if(a==0 && b==0)
 {
     cout<<0;
     return;
 }
 v.push_back(a);
 v.push_back(b);
 for(int i = 1 ; i<5; i++)
 {
    int x = v[i]-v[i-1];
    if(x<0)
    {
        x+=mod;
    }
    else
    {
        x%=mod;
    }
    v.push_back(x);
 }
 n--;
 n%=6;
    
        cout<<v[n];
// rep(i,n+1)
// {
//     cout<<v[i]<<endl;
// }
}

int main()
{
    fast_cin();
//    ll t;
//     cin >> t;
//  while(t--)
//  {
//  solve();
 solve();
    return 0;
}