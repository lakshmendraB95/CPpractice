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
 
int c[1000010];

int main()
{
    fast_cin();
   int n;
   cin>>n;
   ll arr[n];
   ll sum=0;
   rep(i,n)
   {
       cin>>arr[i];
       sum+=arr[i];
   }
   if(n<3)
   {
       cout<<0;
   }
   else if(sum%3)
   {
       cout<<0;
   }
   else
   {
       sum/=3;
       ll temp=0;
       for(int i = n-1; i >= 0 ; --i)
        {
            temp += arr[i];
            if (temp == sum)
                c[i] = 1;
        }
        for(int i = n-2 ; i >= 0 ; --i)
            c[i] += c[i+1];
        
        long long ans = 0;
        temp = 0;
        for(int i = 0 ; i+2 < n ; ++i) {
            temp += arr[i];
            if (temp == sum)
            {
                ans += c[i+2];
            }
        }
        cout << ans << endl;
   }
    return 0;
}