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
    int arr[9][9];
    string s;
    rep(i,9)
    {
        cin>>s;
        rep(j,9)
        {
            arr[i][j]=s[j]-'0';
            if(arr[i][j]==3)
            {
                arr[i][j]=4;
            }
        }
    }
    
    rep(i,9)
    {
        rep(j,9)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }   
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