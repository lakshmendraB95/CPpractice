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
 
int main() {
	fast_cin();
	int t;
	cin>>t;
	while(t--){
	    int n,m,x;
	    cin>>n>>m>>x;
	    vector<pair<int,int>> v;
	    int ele;
	    for(int i=0;i<n;i++){
	        cin>>ele;
	        v.push_back(make_pair(ele,i+1));
	    }
	    sort(v.begin(),v.end());
	    if(v[0].first>=m){
	        cout<<n<<" ";
	        for(int i=1;i<=n;i++){
	            cout<<i<<" ";
	        }
	        
	    }
	    else{
	        int j = n-1;
	        vector<int> ans;
	        while(v[j].first>=m){
	            ans.push_back(v[j].second);
	            j--;
	        }
	        int len = ans.size();
	        if(len<x){
	            for(int i=0;i<x-len;i++){
	                ans.push_back(v[j--].second);
	            }
	        }
	        sort(ans.begin(),ans.end());
	        len = ans.size();
	        cout<<len<<" ";
	        for(int i=0;i<len;i++){
	            cout<<ans[i]<<" ";
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}