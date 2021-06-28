#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      int x;
      map<int,int> m;
      for(int i = 0 ; i<n ; i++)
      {
         cin>>x;
         m[x]++;
      }
      int max=-1;
 
      for(auto i: m)
      {
         if(i.second>max)
         {
            max=i.second;
         }
      }
      cout<<max<<"\n";
   }
}
