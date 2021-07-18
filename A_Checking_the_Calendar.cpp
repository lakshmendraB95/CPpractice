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
    string s[7] = {"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
    string a,b;
    cin>>a>>b;
    int index1,index2;
    rep(i,7)
    {
        if(a==s[i])
        {
            index1=i+1;
        }
        if(b==s[i])
        {
            index2=i+1;
        }
    }
    int dist = abs(index1-index2);
    int dist2 = 7-dist;
    if(index1 <=  index2)
    {
        if(dist==0 || dist == 2 || dist==3)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    else
    {
        if(dist2==0 || dist2 == 2 || dist2 ==3)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}