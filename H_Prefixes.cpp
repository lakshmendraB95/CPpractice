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
    string s;
    cin>>s;
    int count=0;
    for(int i = 0 ; i<n ; i+=2)
    {
        if(s[i]==s[i+1])
        {
            count++;
            if(s[i]=='a')
            {
                s[i]='b';
            }
            else
            {
                s[i]='a';
            }
        }
    }
    cout<<count<<endl;
    cout<<s;
    return 0;
}