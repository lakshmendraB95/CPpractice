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
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    bool flag1,flag2,flag3,flag4;
    flag1=flag2=flag3=flag4=false;
    if(s1=="H" || s2=="H" || s3 == "H"  || s4=="H")
    {
        flag1=true;
    }
    if(s1=="2B" || s2=="2B" || s3 == "2B"  || s4=="2B")
    {
        flag2=true;
    }
    if(s1=="3B" || s2=="3B" || s3 == "3B"  || s4=="3B")
    {
        flag3=true;
    }
    if(s1=="HR" || s2=="HR" || s3 == "HR"  || s4=="HR")
    {
        flag4=true;
    }

    if(flag4 && flag3 && flag2 && flag1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}