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

int32_t main(){

    ifstream in;
    in.open("max-pair.in");
    int tc ;
    in >> tc;
    while(tc--)
    {
        string s;
        in>>s;
        int j =0,l;
        int m =0;

        for(j=0 ; j<int(s.length()); j++)
        {
            for(l=s.length()-1; l>j ;l--)
            {
                if(s[j]!=s[l])
                {
                   
                    m=max(m,l-j);
                    break;
                }
            }
        }
        cout<<m<<endl;
    }
    in.close();
    return 0;
}