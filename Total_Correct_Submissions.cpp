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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x;
        string s;
        map<string,int> mp;
        set<string> st;
        for(int i = 0 ; i<3 ;i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                cin>>s>>x;
                st.insert(s);
                mp[s]+=x;
            }
        }
        vector<int> v;
        for(auto  &it : st)
        {
            v.push_back(mp[it]);
        }
        sort(all(v));
        for(int  i= 0 ; i<v.size() ; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}