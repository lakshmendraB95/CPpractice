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
    int n;
    cin>>n;
    string s;
    cin>>s;
    rep(i,n)
    {
        if(s[i]=='0')
        {
            if(s[i+1]=='0')
            {
                i++;
                while(i<n && s[i]=='0')
                {
                    cout<<0;
                    i++;
                }
                if(i==n)
                {
                    cout<<0;
                    break;
                }
                i--;
            }
            else
            {
                i++;
                int count =0;
                while(i<n && s[i]=='1')
                {
                    count++;
                    i++;
                }
                if(i==n)
                {
                    cout<<count;
                    break;
                    
                }
                i--;
                cout<<count;
            }
        }
        else
        {
            int count=0;
            while(i<n && s[i]=='1')
            {
                count++;
                i++;
            }
            if(i==n)
                {
                    cout<<count;
                    break;
                    
                }
            i--;
            cout<<count;
        }
    }
    return 0;
}