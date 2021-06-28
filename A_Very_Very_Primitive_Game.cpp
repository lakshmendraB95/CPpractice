#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    if(c)
    {
        if(b>a)
        {
           cout<<"Aoki";
        }
        else
        {
             cout<<"Takahashi";
            
        }
    }
    else
    {
        if(a>b)
        {
            cout<<"Takahashi";
        }
        else
        {
            cout<<"Aoki";
        }
    }
}