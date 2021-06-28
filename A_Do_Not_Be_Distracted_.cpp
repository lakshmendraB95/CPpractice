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
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        int x=1;
        cin>>s;
        set <char> p;
        rep(i,s.length())
        {
            if(p.count(s[i]))
            {
                cout<<"NO"<<endl;
                x=0;
                break;
            }
            else
            {
                p.insert(s[i]);
                char x= s[i];
                while(s[i]==x && s[i+1]==x && i<s.length())
                {
                    i++;
                }
            }
        }
        if(x)
        {
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}