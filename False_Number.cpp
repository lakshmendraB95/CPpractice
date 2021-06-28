#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
 

int main()
{
    fast_cin();
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]=='1')
        {
            for(int i = 0 ; i<s.length(); i++)
            {
                if(!i)
                {
                    cout<<s[i]<<'0';
                }
                else
                {
                    cout<<s[i];
                }
            }
            cout<<endl;

        }
        else
        {
            s= '1'+s;
            cout<<s<<endl;
        }
    }
    return 0;
}