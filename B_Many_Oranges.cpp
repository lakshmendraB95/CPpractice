#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
    int a,b,w;
    cin>>a>>b>>w;
    w=w*1000;
    int x,y;
    if(w%b)
    {
        x=w/b;
        x+=1;
    }
    else
    {
        x=w/b;
    }
    y=w/a;
    if(y<x)
    {
        cout<<"UNSATISFIABLE";
    }
    else
    {
        cout<<x<<" "<<y;
    }
}