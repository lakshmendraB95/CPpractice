    #include <bits/stdc++.h>  
     
    using namespace std;
     
    typedef long long ll;
    ll MOD = 998244353;
    #define rep(i,e) for(ll i = 0; i < e; i++)
    #define endl "\n"
    #define dbg(x) cout<<#x<<" = "<<x<<ln
    #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
    #define all(x) (x).begin(), (x).end()
     
     
    int main()
    {
        fast_cin();
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll count=0;
        if(b>=(c*d))
        {
            cout<<-1;
        }
        else
        {
            ll x=0;
            while(x*d<a)
            {
                a+=b;
                x+=c;
                count++;
            }
            cout<<count;
        }
        return 0;
    }