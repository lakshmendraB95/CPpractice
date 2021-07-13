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
int main()
{
fast_cin();
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vll v,t;
    vll v1,v2;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        t.pb(x);
    }
    ll count1=0,count2=0;
    rep(i,0,n)
    {
        if(v[i]>t[i])
        {
            count1+=v[i]-t[i];
           rep(j,0,v[i]-t[i])
            {
            v1.pb(i+1);
            }
        }else if(v[i]<t[i])
        {
            count2+=t[i]-v[i];
            rep(j,0,t[i]-v[i])
            {
            v2.pb(i+1);
            }
        }
    }
    //sort(v1.begin(),v1.end());
    //sort(v2.begin(),v2.end());
    if(count1 != count2)
    {
        cout<<-1<<endl;
    }else 
    {
        cout<<count1<<endl;
        rep(i,0,count1)
        {
            cout<<v1[i]<<" "<<v2[i]<<endl;
        }
 
    }
}  
return 0;
}