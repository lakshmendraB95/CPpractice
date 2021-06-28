#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   int a,b;
   cin>>a>>b;
   int sum1,sum2;
   sum1=sum2=0;
   while(a>0)
   {
       sum1+= a%10;
       a=a/10;
   }
   while(b>0)
   {
       sum2+= b%10;
       b/=10;
   }
   cout<<max(sum1,sum2);
}
