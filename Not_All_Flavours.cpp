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
    set<ll> s;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        int x;
        int answer = 0 ;
        int a[n];
        int count =0,count1=0;
        int r=0;
         int l[n];
        memset(l,0,sizeof(l));
        int j=0;
        vector<int> v;
        int y=0;
        int flag =0;
        rep(i,n)
        {
            cin>>a[i];
            if(i==0)
            {
                x=a[0];
                v.push_back(x);
            }
             if(x==a[i])
            {
                l[j]++;
            }
            else
            {
                j++;
                x=a[i];
                v.push_back(x);
                l[j]++;
            }
        }
        rep(i,n)
        {
            s.insert(a[i]);
            if(s.size()<k )
            {
                count++;
            }
            else
            {
                flag =1;
                answer = max(count,answer);
                s.erase(v[y]);
                count-=l[y];
                count++;
                y++;
            }
        }
        if(!flag)
        {
            cout<<count<<endl;
        }
        else
        {
        cout<<answer<<endl;
        }
        s.clear();
    }
    return 0;
}