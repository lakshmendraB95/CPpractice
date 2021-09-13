#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vll vector<long long>
#define endl "\n"
#define rep(i, a, b) for (ll i = a; i < b; i++)
void solve()
{
    ll n, k;
    cin >> n >> k;
    int arr[n];
    int count = 1;
    rep(i,0, n)
    {
        cin >> arr[i];
    }
    if(n==k)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
    
    rep(i,0,n)
    {
        while (i < n-1 && arr[i] < arr[i + 1])
        {
            count++;
            i++;
        }
    }
    cout<<count<<endl;
    if (count >= n - k + 1)
    {
        cout << "Yes"<<endl;
    }
    else
    {
        cout << "No"<<endl;
    }
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}