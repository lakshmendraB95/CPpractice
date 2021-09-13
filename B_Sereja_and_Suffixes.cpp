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
    int n,m;
    cin>>n>>m;
    int x;
    set<int> s;
    int suf[n];
    int arr[n];
    rep(i,n)
    {
        cin>>arr[i];
    }
    suf[n-1]=1;
    s.insert(arr[n-1]);
    for(int i =  n-2 ; i>=0 ; i--)
    {
        if(!s.count(arr[i]))
        {
            suf[i]= suf[i+1]+1;
        }
        else
        {
            suf[i]=suf[i+1];
        }
        s.insert(arr[i]);
    }
    int q;
    rep(i,m)
    {
        cin>>q;
        cout<<suf[q-1]<<endl;
    }
    return 0;
}