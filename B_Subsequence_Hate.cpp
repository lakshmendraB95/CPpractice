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
    string s;
    cin>>s;
    int count=0,count1=0,count0=0,count3=0;
    bool flag1,flag2;
    flag1=flag2=false;
    int l1=-1,l2=-1,r1=-1,r2=-1;
    for(int i = 0 ; i<s.length() ; i++)
    {
        if(s[i]=='0' && !flag1)
        {
            l1=i;
            flag1=true;
            
        }
        else if(s[i]=='1' && !flag2)
        {
            l2=i;
            flag2=true;
            
        }
        else if(s[i]=='0' && flag1)
        {
            r1=i;
            
        }
        else if(s[i]=='1' && flag2)
        {
            r2=i;
            
        }
    }
    if(l1>=0 && r1>=0 )
    {
    for(int i =l1+1 ; i<r1 ; i++)
    {
        if(s[i]=='1')
        {
            count1++;
        }
    }
    }
    if(l2>=0 && r2>=0)
    {
            for(int i =l2+1 ; i<r2 ; i++)
    {
        if(s[i]=='0')
        {
            count0++;
        }
    }
    }
    
    cout<<count1+count0<<endl;
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