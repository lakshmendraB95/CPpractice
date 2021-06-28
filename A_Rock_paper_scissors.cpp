#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   int x,y;
   string s ="012";
   cin>>x>>y;
   if(x==y)
   {
       cout<<x;
   }
   else
   {
       if((x==0 && y==1) || (x==1 && y==0))
       {
           cout<<2;
       }
       else if((x==2 && y==1) || (x==1 && y==2))
       {
           cout<<0;
       }
       else if((x==2 && y==0) || (x==0 && y==2))
       {
           cout<<1;
       }
   }
}