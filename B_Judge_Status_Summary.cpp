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
    int n;
    cin>>n;
    int a,w,t,r;
    a=w=r=t=0;
    string s;
    rep(i,n)
    {
        cin>>s;
        if(s=="AC")
        {
            a++;
        }
        else if(s=="TLE")
        {
            t++;
        }
        else if(s=="WA")
        {
            w++;
        }
        else
        {
            r++;
        }
    }
    cout<<"AC x "<<a<<endl;
    cout<<"WA x "<<w<<endl;
    cout<<"TLE x "<<t<<endl;
    cout<<"RE x "<<r<<endl;
    return 0;
}