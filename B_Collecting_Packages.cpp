#include <bits/stdc++.h>  
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mod               1000000007
#define modadd(a,b,c)     ((a%c)+(b%c))%c
#define modmul(a,b,c)     ((a%c)*(b%c))%c
#define modsub(a,b,c)     ((a%c)-(b%c))%c
 
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int> > v(n);
    bool flag=false;
    rep(i,n)
    {
        cin>>v[i].first>>v[i].second;
       
    }
    sort(v.begin(),v.end());
   
        int a=0 , b=0;
        string ans="";
        for(int i = 0  ; i< n ; i++)
        {
            int r = v[i].first-a;
            int   u  =  v[i].second-b;
            if(r<0 || u<0)
            {
                cout<<"NO"<<endl;
                return;
            }
            ans+=string(r,'R');
            ans+=string(u,'U');
            a=v[i].first;
            b=v[i].second;
         }
        cout<<"YES"<<endl;
    cout<<ans<<endl;
}

int main()
{
    fast_cin();
   ll t;
    cin >> t;
 while(t--)
 {
 solve();
  }
 // solve();
    return 0;
}