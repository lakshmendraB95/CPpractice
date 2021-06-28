#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
    int a,b;
    cin>>a>>b;
    if(a>b)
    {
        if(b+3>a)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    else if (b>a)
    {
        if(a+3>b)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
}