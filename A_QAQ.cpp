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
   ll count=0;
   for(int i= 0  ;i < s.length() ; i++)
   {
       if(s[i]=='Q')
       {
           for(int j = i+1 ; j<s.length(); j++)
           {
               if(s[j]=='A')
               {
                   for(int k = j+1;  k<s.length(); k++)
                   {
                       if(s[k]=='Q')
                       {
                           count++;
                       }
                   }
               }
           }
       }
   }
   cout<<count;
    return 0;

}