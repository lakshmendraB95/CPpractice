#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
 
int fast(int num , int power , int a)
{
    int x = int(num-pow(a,power));
    if(x<0)
    {
        return 0;
    }
    else if(x==0)
    {
        return 1;
    }
    else
    {
        return fast(x,power,a+1)+fast(num,power,a+1);
    }
}
int main()
{
    fast_cin();
    int num,power;
    cin>>num>>power;
    cout<<fast(num , power , 1);
    return 0;
}