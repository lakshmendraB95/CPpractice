#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all_v(x) (x).begin(), (x).end()
#define all_a(a,n) a, a+n
#define max_a(a,n) *max_element(all_a(a,n));
#define min_a(a,n) *min_element(all_a(a,n));
#define max_v(v) *max_element(all_v(v));
#define min_v(v) *min_element(all_v(v));
 
 
int main()
{
    fast_cin();
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l,r;
    l=r=0;
    rep(i,n)
    {
        if(s[i]=='L')
        {
            l++;
        }
        else if(s[i]=='R')
        {
            r++;
        }
    }
    if(l==0 && r==0)
    {
        cout<<0;
    }
    if(l==0)
    {
        int flag=0;
        int a,b;
        rep(i,n)
        {
            
            if(!flag && s[i]=='R')
            {
                a=i+1;
                flag =1;
            }
            if(s[i]=='R')
            {
                b=i+1;
            }
        }
        cout<<a<<" "<<b+1;
    }
    else
    {
        int flag=0;
        int a,b;
        rep(i,n)
        {
            if(!flag && s[i]=='L')
            {
                b=i+1;
                flag =1;
            }
            if(s[i]=='L')
            {
                a=i+1;
            }
        }
        cout<<a<<" "<<b-1;
    }
    
    return 0;
}