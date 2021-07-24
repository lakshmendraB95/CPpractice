#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 1e9+7;
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
    string answer = "chokudai";
    cin>>s;
    int count =1;
    int count1=0;
    for(int i =0 ; i<answer.length(); i++)
    {
        count1=0;
        for(int j = i ; j<s.length()-i; j++)
        {
            if(s[j]==answer[i])
            {
                count1++;
            }
        }
        count*=count1;
        count=count%MOD;
        if(!count)
        {
            break;
        }
    }
    cout<<count;
    return 0;
}