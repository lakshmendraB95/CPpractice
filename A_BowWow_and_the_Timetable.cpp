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
    string s;
    cin>>s;
    int count=0;
    int count1=0;
    reverse(s.begin(),s.end());
    for(int i = 0 ; i<s.length();i++)
    {
        if(s[i]=='1')
        {
            count1++;
        }
        
    }
    if(s=="0")
    {
        cout<<0;
    }
    else
    {
    if(count1>1)
    {
        cout<<ceil(float(s.size())/2);
    }
    else
    {
    cout<<ceil((float(s.size())-1)/2);
    }
    }
    return 0;
}