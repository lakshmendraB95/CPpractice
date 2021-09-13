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
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        rep(i,n)
        {
            cin>>arr[i];
        }
        ll w[k];
        rep(i,k)
        {
            cin>>w[i];
        }
        sort(arr,arr+n);
        sort(w,w+k);
        int x=0;
        for(int i = 0 ; i<k ; i++)
        {
            if(w[i]!=1)
            {
                x=i;
                break;
            }
        }
        sort(w+x,w+k,greater<>());
        // rep(i,k)
        // {
        //     cout<<w[i]<<" ";
        // }
        // cout<<endl;
        ll sum=0;
        ll l = 0 ,m=n-1;
        for(ll i = 0 ; i<k  ;i++)
        {
            if(w[i]==1)
            {
                sum+=(arr[m--]*2);
            }
            else
            {
            sum+=arr[m--];
            sum+=arr[l];
            l+=w[i]-1;
            }
        }
        cout<<sum<<endl;
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