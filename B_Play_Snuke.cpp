#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
    int n;
    cin>>n;
    int min_price=INT_MAX;
    int a[n],p[n],s[n];
    for(int i = 0 ; i< n ; i++)
    {
        cin>>a[i]>>p[i]>>s[i];
    }
    for(int i = 0 ; i<n ; i++)
    {
        if(a[i]<s[i])
        {
            if(p[i]<min_price)
            {
                min_price=p[i];
            }
        }
    }
    if(min_price==INT_MAX)
    {
        cout<<-1;
    }
    else
    {
        cout<<min_price;
    }
}