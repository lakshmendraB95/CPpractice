#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll MOD = 998244353;
#define rep(i, e) for (ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout << #x << " = " << x << endl
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define mod 1000000007
#define modadd(a, b, c) ((a % c) + (b % c)) % c
#define modmul(a, b, c) ((a % c) * (b % c)) % c
#define modsub(a, b, c) ((a % c) - (b % c)) % c

void solve()
{
    int n;
    cin >> n;
    bool arr[n+1];
    for(int i = 0 ; i<=n ; i++)
    {
        arr[i]=false;
    }
    int ans=-1;
    rep(i,n)
    {
        int x,y;
        cin>>x;
        int brr[x];
        bool flag = false;
        rep(j,x)
        {
            cin>>brr[j];
            if(!flag && !arr[brr[j]])
            {
                flag = true;
                arr[brr[j]]=true;
            }
        }
        if(!flag)
        {
            ans=i+1;
        }
     }
    if(ans==-1)
    {
        cout<<"OPTIMAL"<<endl;
    }
    else
    {
        for(int i = 1 ; i<= n ; i++)
        {
            if(!arr[i])
            {
                cout<<"IMPROVE"<<endl;
                cout<<ans<<" "<<i<<endl;
                return;
            }
        }
        cout<<"OPTIMAL"<<endl;
    }
}

int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}