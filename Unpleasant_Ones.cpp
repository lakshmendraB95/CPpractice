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
        int x,od=0,ev=0;
        vector<int> odd;
        vector<int> even;
        rep(i,n)
        {
            cin>>x;
            if(x%2==0)
            {
                even.push_back(x);
                ev++;
            }
            else
            {
                odd.push_back(x);
                od++;
            }
        }
        for(int i = 0 ; i<min(od,ev) ; i++)
        {
            cout<<odd[i]<<" "<<even[i]<<" ";
        }
        if(od>ev)
        {
            for(int i = ev ; i<od ; i++)
            {
                cout<<odd[i]<<" ";
            }
        }
        else if(ev>od)
        {
            for(int i = od ;i<ev ; i++ )
            {
                cout<<even[i]<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}