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
    int a,b,c;
    while(t--)
    {
        int count=1;
        cin>>a>>b>>c;
        int j=1;
        while(a%2==0)
        {
            a/=2;
            count+=j;
            j=j*2;
        }
        while(b%2==0)
        {
            b/=2;
            count+=j;
            j=j*2;
        }
        if(count>=c)
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