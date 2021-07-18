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

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
 

int main()
{
	fast_cin();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		set <int> s;
		vector <int> v;
		map<int,int> mp;
		cin>>n;
		int arr[n];
		rep(i,n)
		{
			cin>>arr[i];
			mp[arr[i]]++;
			s.insert(arr[i]);
		}
	}
	return 0;
}