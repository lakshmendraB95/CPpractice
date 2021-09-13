#include <bits/stdc++.h>  
using namespace std;
 

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int l,r;
       cin>>l>>r;
       int b = (r/2)+1;
       if(b>=l && b<=r)
       {
           cout<<r%b<<endl;
       }
       else
       {
           cout<<r-l<<endl;
       }
   }
    return 0;
}