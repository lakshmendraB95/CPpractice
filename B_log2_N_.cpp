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

unsigned ll po(unsigned ll n,unsignedll k){
	ull x=1;
	while(k){
		if(k&1)
			x*=n;
		n*=n;
		k>>=1;
	}
	return x;
}
 

int main()
{
    fast_cin();
   unsigned long long n;
   cin>>n;
   long double x = log2(n);
   cout<<long(x);
    return 0;
}