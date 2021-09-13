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
    string s;
    cin>>s;
    int len = s.length();
    int count =0;
    bool flag= false;
    rep(i,len)
    {
        if(s[i]=='M')
        {
            if(s[i+1]=='U')
            {
                flag=true;
                break;
            }
            i++;
            while(s[i]=='?' && i<len)
            {
                i++;
            }
            if(s[i]=='U' && i<int(len))
            {
                flag=true;
                break;
            }
            else
            {
                i--;
            }
        }
    }
    if(flag)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
 }
    return 0;
}