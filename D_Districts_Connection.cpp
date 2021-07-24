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
        int n;
        cin>>n;
        int arr[n+1];
        int index=-1;
        for(int i  = 1; i<= n ; i++)
        {
            cin>>arr[i];
        }
        vector<pair<int,int> > v;
        for(int i = 2 ; i<=n ; i++)
        {
            if(arr[1]!=arr[i])
            {
                index=i;
                v.push_back(make_pair(1,i));
            }
        }
        for(int i = 2 ; i<=n ; i++)
        {
            if(arr[i]==arr[1])
            {
                v.push_back(make_pair(index,i));
            }
        }
        if(index!=-1)
        {
            cout<<"YES"<<endl;
        for(auto &it: v)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}