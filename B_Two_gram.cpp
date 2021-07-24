#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef long long int  lli;
#define pb push_back 
#define va v.begin(),v.end()
#define vd v.begin(),v.end(),greater<ll>()
#define all_a(a,n) a, a+n 
#define max_a(a,n) *max_element(all_a(a,n)); 
#define min_a(a,n) *min_element(all_a(a,n)); 
#define max_v(v) *max_element(all_v(v)); 
#define min_v(v) *min_element(all_v(v));
#define vi vector<int> 
#define vll vector<long long >
#define pb push_back 
#define pii pair<int,int> 
#define si set<int>
#define sll set<long long>
#define endl "\n"
#define rep(i,a,b) for(ll i = a; i < b; i++)
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void countstring(string s)
{
    map<string,int> mp;
    string a;
    rep(i,0,s.length()-1)
    {
        a = s.substr(i,2);
        mp[a]++;
    }
    ll maxx=-1;
    string ans="";
    for(pair<string,int> it : mp)
    {
        if(it.second>maxx)
        {
            ans=it.first;
            maxx=it.second;
        }
    }
    cout<<ans<<endl;
}
int main()
{
fast_cin();
ll n;
cin>>n;
string s;
cin>>s;
countstring(s);
return 0;
}