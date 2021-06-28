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
    string s;
    cin>>s;
    if(s[s.length()-1]-'0'==3)
    {
        cout<<"bon";
    }
    else if(s[s.length()-1]-'0'==0 || s[s.length()-1]-'0'==1 || s[s.length()-1]-'0'==6 || s[s.length()-1]-'0'==8)
    {
        cout<<"pon";
    }
    else
    {
        cout<<"hon";
    }
    return 0;
}