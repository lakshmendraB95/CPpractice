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
    int n;
    cin>>n;
    int arr[n];
    set<int> s;
    vector <int> ans;
    rep(i,n)
    {
        cin>>arr[i];
    }
    for(int i = n-1 ; i>=0 ; i--)
    {
        if(!s.count(arr[i]))
        {
            s.insert(arr[i]);
            ans.push_back(arr[i]);
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto &it:ans)
    {
        
        cout<<it<<" ";

    }
    return 0;
}