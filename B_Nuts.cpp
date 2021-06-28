#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   int t;
   cin>>t;
   int arr[t];
   int sum=0;
   for(int i = 0 ; i<t; i++)
   {
       cin>>arr[i];
       if(arr[i]>10)
       {
           sum+=(arr[i]-10);
       }
   }
   cout<<sum;
}