#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
ll t;
cin>>t;
while(t--)
{
    ll n,sum1=0,sum2=0,sum3=0,cnt=0;
    cin>>n;
    vector<ll> a(n),b(n);
    for(auto &it: a)cin>>it;
    for(auto &it: b)cin>>it;
    int range=n-floor(n/4);
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    rep(i,0,range)
    {
        sum1+=a[i];
    }
    rep(i,0,range)
    {
        sum2+=b[i];
    }
    rep(i,0,n)
    {
        sum3+=b[i];
    }
    if(sum1>sum2)
    {
        cout<<0<<endl;
    }
    else
    {
        ll a = sum2 -sum1;
        ll b=sum3 - sum2;
        while(a>b)
        {
            b+=100;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}
return 0;
}