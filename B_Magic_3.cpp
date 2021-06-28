#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
    int n,s,d;
    cin>>n>>s>>d;
    int a[n],b[n];
    for(int i = 0 ; i<n ;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i = 0 ; i<n ; i++)
    {
        if(a[i]<s && b[i]>d)
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}