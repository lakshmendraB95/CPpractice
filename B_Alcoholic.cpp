#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
    int a,b;
    cin>>a>>b;
    int sum=0;
    for(int i= 0 ; i<a ; i++)
    {
        int x,y;
        cin>>x>>y;
        sum+=(x*y);
        if(sum>(b*100))
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
}