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
        string s;
        cin>>s;
        int len = s.length();
        if(len%2==0)
        {
            int len1 = (len/2);
            int len2  = len/2;
            string a = s.substr(0,len1);
            string b = s.substr(len2,len-1);
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            
            if(a==b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            int len1 = (len/2);
            int len2  = (len/2)+1;
            string a = s.substr(0,len1);
            string b = s.substr(len2,len-1);
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            if(a==b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}