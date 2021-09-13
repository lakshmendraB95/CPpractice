    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef long long int lli;
    #define pb push_back
    #define mp make_pair
    #define pll pair<ll, ll>
    #define va(a) a.begin(), a.end()
    #define vd(d) d.begin(), d.end(), greater<ll>()
    #define vi vector<int>
    #define vll vector<long long>
    #define pb push_back
    #define pii pair<int, int>
    #define si set<int>
    #define sll set<long long>
    #define endl "\n"
    #define rep(i, a, b) for (ll i = a; i < b; i++)
    #define demonb95                      \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
        cout.tie(NULL)
    void solve()
    {
        ll n, x;
        cin >> n;
        vector<pll> v;
        rep(i, 0, n)
        {
            cin >> x;
            v.pb({x,i});
        }
        if(is_sorted(va(v)))
        {
            cout<<0;
            return;
        }
        int count=1,m=1;
       sort(v.begin(),v.end());
        for(int i = 0 ; i< n ; i++)
        {
            while(i+1<n && v[i].second<v[i+1].second)
            {
                i++;
                count++;
                m=max(m,count);
            }
            count=1;
        }
        cout<<n-m;
        
        }
    int main()
    {
        demonb95;
     
        ll t = 1;
        // cin>>t;
        while (t--)
        {
            solve();
        }
        return 0;
    }