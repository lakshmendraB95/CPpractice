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
    string a,b;
    cin>>a>>b;
    set<char> p,q;
    rep(i,a.length())
    {
        p.insert(a[i]);
        q.insert(b[i]);
    }
    int len1,len2;
    int flag=0;
    len1=int(p.size());
    len2 = int(q.size());
    char arr[len1],brr[len2];
    int i =0;
    int j =0;
    for(auto it: p)
    {
        arr[i++]=it;
    }
    for(auto it:q)
    {
        brr[j++]=it;
    }
    for(int i = 0 ; i<len1 ; i++)
{
    for(int j = 0 ; j<len2 ;j++)
    {
        if(arr[i]==brr[j])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        break;
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