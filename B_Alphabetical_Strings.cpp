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
    string s;
    int a=-1;
    while(t--)
    {
        cin>>s;
        for(int i = 0 ; i<s.length() ; i++)
        {
            if(s[i]=='a')
            {
                a=i;
            }
        }
        if(a==-1)
        {
            cout<<"No"<<endl;
        }
        else
        {
            int x=0;
            int j=1;
            while(j<s.length())
            {
                if( s[a+j]!='a'+j && s[a-j]!='a'+j)
                {
                    cout<<"No"<<endl;
                    break;
                }
                else
                {
                    x++;
                    if(x%2==0)
                    {
                        j++;
                    }
                }
            }
            if(j==s.length())
            {
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}