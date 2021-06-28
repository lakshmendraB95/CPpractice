#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()

bool checkValidity(int a, int b, int c)
{
    // check condition
    if (a + b <= c || a + c <= b || b + c <= a)
        return false;
    else
        return true;
}
 

int main()
{
    fast_cin();
    int n;
     cin>>n;
    int arr[n];
    int count=0;
    rep(i,n)
    {
        cin>>arr[i];   
    }
    rep(i,n-2)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k = j+1 ; k<n ;k++)
            if(arr[i]!= arr[j] && arr[j]!=arr[k] && arr[k]!=arr[i] && checkValidity(arr[i],arr[j],arr[k]) )
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}