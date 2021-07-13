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
    int m=INT_MAX;
    int answer;
    rep(i,n)
    {
        cin>>arr[i];
        if(arr[i]<m)
        {
            m=arr[i];
            answer = i+1;
        }
    }
    if(n==1 || (n==2 && arr[0]==arr[1]))
    {
        cout<<-1;
    } 
    else
    {
        cout<<1<<endl;
        cout<<answer;
    }
    return 0;
}