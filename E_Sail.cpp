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
    int n,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    string s;
    cin>>s;
    int i;
    for(  i = 0 ; i<n && !(x1==x2 && y1==y2) ; i=i+0)
    {
        if(s[i]=='S' && y2<y1)
        {
            y1--;
        }
        else if (s[i]=='N' && y1<y2)
        {
            y1++;
        }
        else if(s[i]=='E'&& x1<x2)
        {
            x1++;
        }
        else if(s[i]=='W' && x2<x1)
        {
            x1--;
        }
		i++;
    }
    if(x1==x2 && y1==y2)
    {
        cout<<i<<endl;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}