#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   int n;
   cin>>n;
   int x[n],y[n];
   int s=0;
   for(int i = 0 ; i<n ;i++)
   {
       cin>>x[i]>>y[i];
   }
   for(int i = 0 ; i<n-1 ; i++)
   {
       for(int j = i+1 ; j<n ; j++)
       {
           int a = abs(y[j]-y[i]);
           int b = abs(x[j]-x[i]);
            if(b>=a)
            {
                s++;
            }
       }
   }
   cout<<s;
}