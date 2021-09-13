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
 

int main()
{
    fast_cin();
   string s;
   cin>>s;
   int a = s[0] - '0';
   int b = s[1]-'0';
   int c = s[2]-'0';
   int d = s[3]-'0';
   if(a==b && b==c && c==d)
   {
       cout<<"Weak";
   }
   else if(b==(a+1)%10 && c==(b+1)%10 && d==(c+1)%10)
   {
       cout<<"Weak";
   }
   else
   {
       cout<<"Strong";
   }
    return 0;
}