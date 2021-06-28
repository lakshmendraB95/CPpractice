#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   int arr[3];
   for(int i = 0 ; i<3 ; i++)
   {
       cin>>arr[i];
   }
   if(arr[0] == arr[1] && arr[1]==arr[2])
   {
       cout<<"Yes";
   }
   else
   {
       sort(arr,arr+3);
       if((arr[1]-arr[0]) == (arr[2]-arr[1]))
       {
           cout<<"Yes";
       }
       else
       {
           cout<<"No";
       }
   }
}