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
    int arr[n];
    int index =0; 
    int mx=0;
    rep(i,n)
    {
        cin>>arr[i];
        if(arr[i]>mx)
        {
            mx=arr[i];
            index =i;
        }
    }
    int count[n+1];
    rep(i,n+1) count[i]=0;
    vector<int> left,right;
    for(int i = 0 ; i<index ; i++)
    {
        left.push_back(arr[i]);
    }
    for(int i = index+1 ; i<n ; i++)
    {
        right.push_back(arr[i]);
    }
    sort(left.begin(),left.end(),greater<int>());
    sort(right.begin(),right.end(),greater<int>());
    int l_size = left.size();
    int r_size = right.size();
    // cout<<l_size<<" "<<r_size<<endl;
    int k,l;
    k=l=0;
    if(l_size==0)
    {
        for(int i = 0 ; i<r_size ; i++)
        {
            count[right[i]]=k+1;
            k++;
        }
    }
    else if(r_size==0)
    {
        for(int i = 0 ; i<l_size ; i++)
        {
            count[left[i]]=l+1;
            l++;
        }
    }
    else
    {
    for(int i = 0 ; i<l_size; i+=2)
    {
        count[left[i]]=count[left[i+1]]=k+1;
        k++;
    }
    if(l_size%2)
    {
        count[left[l_size-1]]=k+1;
    }
    for(int i = 0 ; i<r_size; i+=2)
    {
        count[right[i]]=count[right[i+1]]=l+1;
        l++;
    }
    if(r_size%2)
    {
        count[right[r_size-1]]=l+1;
    }
    }
    for(int  i= 0 ; i< n ; i++)
    {
        cout<<count[arr[i]]<<" ";
    }
    cout<<endl;
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