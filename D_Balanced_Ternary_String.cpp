#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all_v(x) (x).begin(), (x).end()
#define all_a(a,n) a, a+n
#define max_a(a,n) *max_element(all_a(a,n));
#define min_a(a,n) *min_element(all_a(a,n));
#define max_v(v) *max_element(all_v(v));
#define min_v(v) *min_element(all_v(v));
 

int main()
{
    fast_cin();
    int n;
    cin>>n;
    int count_0,count_1,count_2;
    count_1=count_2=count_0=0;
    string s;
    cin>>s;
        rep(i,n)
        {
            if(s[i]=='0')
            {
                count_0++;
            }
            else if(s[i]=='1')
            {
                count_1++;
            }
            else
            {
                count_2++;
            }
        }
        rep(x,n)
        {
            if(count_0<n/3)
            {
            if(s[x]!='0')
            {
                if(s[x]=='1')
                {
                    if(count_1 > (n/3))
                    {
                        s[x]='0';
                        count_1--;
                        count_0++;
                    }
                }
                else
                {
                    if(count_2 > (n/3))
                    {
                        s[x]='0';
                        count_2--;
                        count_0++;
                    }
                }
            }
            }
        }
        rep(x,n)
        {
        if(count_1<(n/3) )
        {
            if(s[x]!='1')
            {
                if(s[x]=='2')
                {
                    if(count_2 > (n/3))
                    {
                        s[x]='1';
                        count_2--;
                        count_1++;
                    }
                }
            }
        }
        }
        for(int x =n-1 ; x>=0 ; x--)
        {
        if(count_2<(n/3))
        {
            if(s[x]!=2)
            {
                if(s[x]=='0')
                {
                    if(count_0 > (n/3))
                    {
                        s[x]='2';
                        count_0--;
                        count_2++;
                    }
                }
                else
                {
                    if(count_1 > (n/3))
                    {
                        s[x]='2';
                        count_1--;
                        count_2++;
                    }
                }
            }
        }
        }
        for(int x = n-1 ;x>=0 ;x--)
        {
        if(count_1<(n/3))
        {
            if(s[x]!=1)
            {
                if(s[x]=='0')
                {
                    if(count_0 > (n/3))
                    {
                        s[x]='1';
                        count_0--;
                        count_1++;
                    }
                }
                
            }
        }
        }
        
        cout<<s;
    return 0;
}