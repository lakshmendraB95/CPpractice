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
        int c;
        ll sum=0;
        int count_2=0,count_1=0;
        rep(i,n)
        {
            cin>>c;
            if(c==1)
            {
                count_1++;
            }
            else
            {
                count_2++;
            }
            sum+=c;
        }
        if(sum%2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            sum=sum/2;
            if(sum%2==0 || (sum%2 && count_1))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    
    return 0;
}