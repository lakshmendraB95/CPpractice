#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
 

int main()
{
    fast_cin();
     double a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
   double ans = (a1*b2 + a2*b1)/(a2+b2);
   cout<<fixed<<setprecision(20);
	cout<<ans;
    return 0;
}