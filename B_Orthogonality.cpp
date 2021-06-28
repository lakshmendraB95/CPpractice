#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
    int n;
    cin>>n;
    int x[n],y[n];
    int sum=0;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>x[i];
    }
    for(int i =0 ; i<n ; i++)
    {
        cin>>y[i];
    }
    for(int i=0 ; i<n ; i++)
    {
        sum+=(x[i]*y[i]);
    }
    if(sum)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
}