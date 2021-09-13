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

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 

int main()
{
    fast_cin();
   int t;
   cin>>t;
   while(t--)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> ans;
    int flag =false;
    int flag2= false;
    int ans2;
    rep(i,n)
    {
        if(!isPrime(s[i]-'0') || s[i]=='1')
        {
            ans2=s[i]-'0';
            flag2 = true;
            break;
        }
    }
    int a,b;
    rep(i,n)
    {
        rep(j,n)
        {
            if(i!=j && i<j)
            {
                a = s[i]-'0';
                b = s[j]-'0';
                if(!isPrime(a*10 +b))
                {
                    ans.push_back(a);
                    ans.push_back(b);
                    flag = true;
                    break;
                }
            }
        }
    }
    if(flag2)
    {
        cout<<1<<endl;
        cout<<ans2<<endl;
    }
    else if(flag && !flag2)
    {
        cout<<2<<endl;
        cout<<ans[0]<<ans[1]<<endl;
    }
}
    return 0;
}