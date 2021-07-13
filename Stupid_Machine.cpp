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
        ll n;
        cin>>n;
        int arr[n];
        ll min;
        min  = -1;
        ll answer =0;
        rep(i,n)
        {
            cin>>arr[i];
            if(min==-1)
            {
                min = arr[i];
                answer += arr[i] ;
            }
            else if(arr[i]<=min)
            {
                min=arr[i];
                answer+=arr[i];
            }
            else if(arr[i]>min)
            {
                answer+=min;
            }
        }
        cout<<answer<<endl;
    }
    return 0;
}