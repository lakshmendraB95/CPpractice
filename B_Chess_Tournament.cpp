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
    string s;
    cin>>s;
    char arr[n][n];
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            if(i==j)
            {
            arr[i][j]='X';
            }
            else
            {
                arr[i][j]='=';
            }
        }
    }
    bool flag =true;
    for(int i = 0 ; i<n; i++)
    {
        if(s[i]=='2')
        {
            flag = false;
            for(int j = 0 ; j<n ;j++)
            {
                if(arr[i][j]=='=' && s[j]!='1' && arr[j][i]=='=' && i!=j)
                {
                    arr[i][j]='+';
                    arr[j][i]='-';
                    flag =true;
                }
                if(flag)
                {
                    break;
                }
            }
        }
        if(!flag)
        {
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
        rep(i,n)
        {
            rep(j,n)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
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