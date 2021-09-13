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
   int n,x;
   cin>>n>>x;
   int arr[n];
   vector<pair<int,int> > v;
   rep(i,n)
   {
       cin>>arr[i];
       v.push_back({arr[i],i});
   }
   sort(arr,arr+n);
   bool flag = false;
   int i =0 ;
   int j = 1;
   int k=n-1;
   while(i<j<k)
   {
       if(arr[i]+arr[j]==x)
       {
           int ans1,ans2;
           for(auto it :  v)
           {
               if(it.first==arr[i])
               {
                   ans1=it.second+1;
               }
           }

            for(auto it :  v)
           {
               if(it.first==arr[j] && it.second!=ans1-1)
               {
                   ans2=it.second+1;
               }
           }
           cout<<ans1<<" "<<ans2;
           return 0;
       }
       else if(arr[i]+arr[j]>x)
       {
           j--;
       }
       else
       {
           i++;
       }
   }
   cout<<"IMPOSSIBLE";
    return 0;
}