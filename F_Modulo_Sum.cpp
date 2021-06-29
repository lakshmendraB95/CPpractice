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

void search(int k ,int z) 
{
if (k == n) {
    int sum=0;
for(int i = 0 ; i<n ; i++)
{
    sum+=subset[i];
}
if(sum%z==0)
{
    cout<<"YES";
    return 0;
}
} else {
search(k+1,z);
subset.push_back(k);
search(k+1,z);
subset.pop_back();
}
}
 

int main()
{
    fast_cin();
    int n,
    return 0;
}