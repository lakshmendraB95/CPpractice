#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 1; i <= e; i++)
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
        string n;
        cin>>n;
        int len = n.length();
        int x = n[0]-'0';
        int sum=0;
        if(len==4)
        {
            sum = 10*x;
        }
        else
        {
            sum=10*(x-1);
            rep(i,len)
            {
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
    
    return 0;
}