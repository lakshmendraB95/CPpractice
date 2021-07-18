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
 
int findDistinctCount(vector<int> &input, int k)
{
    unordered_map<int, int> f;
    int distinct = 0;
    int m = 0;

    for (int i = 0; i < input.size(); i++)
    {
        if (i >= k)
        {
            f[input[i - k]]--;
            if (f[input[i - k]] == 0) {
                distinct--;
            }
        }
 
        f[input[i]]++;
        if (f[input[i]] == 1) {
            distinct++;
        }
        if(i>=k-1)
        {
        m=max(distinct,m);
        }
        
    }
    return m;
}
 
int main()
{
    fast_cin();
    int n,k;
    cin>>n>>k;
    int x;
    vector <int> v;
    rep(i,n)
    {
        cin>>x;
        v.push_back(x);
    }
    int answer =findDistinctCount(v, k);
    
    cout<<min(answer,k);
    return 0;
}