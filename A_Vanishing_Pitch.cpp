#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a*b>d || a*c<d)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}