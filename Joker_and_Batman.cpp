#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all_v(x) (x).begin(), (x).end()
#define all_a(a,n) a, a+n
#define max_a(a,n) *max_element(all_a(a,n));
#define min_a(a,n) *min_element(all_a(a,n));
#define max_v(v) *max_element(all_v(v));
#define min_v(v) *min_element(all_v(v));
 

int main()
{
    fast_cin();
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,l;
        cin>>n>>m>>l;
        map<int,int> mp;
        int k;
        int y;
        int count =0;
        for(int  i = 1 ; i<=m ; i++)
        {
            cin>>k;
            for(int j = 0 ; j<k ; j++)
            {
                cin>>y;
                mp[y]=i;
            }
        }
        int arr[l];
        for(int  i = 0 ; i<l ; i++)
        {
            cin>>arr[i];
        }
        for(int i = 0 ; i<l-1 ; i++)
        {
            if(mp[arr[i]]==mp[arr[i+1]] )
            {
                count++;
            }
        }
        cout<<l-count<<endl;
    }
    return 0;
}