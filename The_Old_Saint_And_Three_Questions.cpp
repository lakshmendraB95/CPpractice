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
    map<int,int> mp1,mp2;
    for(int i= 0 ; i< n ; i++)
    {
        mp1[0]=mp1[1]=mp2[1]=mp2[0]=0;
        for(int j =0 ; j<2 ;j++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            if(!j)
            {
            mp1[x]++;
            mp1[y]++;
            mp1[z]++;
            }
            else
            {
            mp2[x]++;
            mp2[y]++;
            mp2[z]++;
            }
        }
        if(mp1[0]==mp2[0])
        {
            cout<<"Pass"<<endl;
        }
        else
        {
            cout<<"Fail"<<endl;
        }
    }
}

int main()
{
 solve();
    return 0;
}