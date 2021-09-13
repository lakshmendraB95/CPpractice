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
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    map<int,int> vow;
    map<int,int> con;
    if(s.length()==1)
    {
        cout<<0<<endl;
        return;
    }
    else
    {
        int c=0,v=0;
        set<char> a;
        rep(i,s.length())
        {
            a.insert(s[i]);
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                v++;
                vow[s[i]]++;
            }
            else
            {
                c++;
                con[s[i]]++;
            }
        }
        if(a.size()==1)
        {
            cout<<0<<endl;
            return;
        }
        int ans1,ans2;
        ans1 = c;
        ans2=v;
        int m1,m2;
        m1=m2=0;
        char c1,c2;
        if(v)
        {
        for(auto it : vow)
        {
            if(it.second>m1)
            {
                m1=it.second;
                c1=it.first;
            }
        }
        for(auto it : vow)
        {
            if(it.first!=c1)
            {
                ans1+=(2*it.second);
            }
        }
        }
        if(c)
        {
         for(auto it : con)
        {
            if(it.second>m2)
            {
                m2=it.second;
                c2=it.first;
            }
        }
        for(auto it : con)
        {
            if(it.first!=c2)
            {
                ans2+=(2*it.second);
            }
        }   
        }
        cout<<min(ans1,ans2)<<endl;
    }
}

int main()
{
    fast_cin();
   ll t;
    cin >> t;
 for(int i = 1 ;i<=t ;i++)
 {
cout<<"Case #"<<i<<": ";
 solve();
  }
 // solve();
    return 0;
}