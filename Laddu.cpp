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
        string nationality;
        int multiplier;
        cin>>n>>nationality;
        if(nationality=="INDIAN")
        {
            multiplier=200;
        }
        else
        {
            multiplier=400;
        }
        ll laddus = 0;
        while(n--)
        {
            
            string s;
            cin>>s;
            int n;
            if(s=="CONTEST_WON")
            {
                cin>>n;
                if(n<20)
                {
                laddus += 300 + (20-n);
                }
                else
                {
                    laddus+=300;
                }
            }
            else if (s=="BUG_FOUND")
            {
                cin>>n;
                laddus+=n;
            }
            else if(s=="TOP_CONTRIBUTOR")
            {
                laddus += 300;
            }
            else
            {
                laddus += 50;
            }
        }
        cout<<laddus/multiplier<<endl;
    }
    return 0;
}