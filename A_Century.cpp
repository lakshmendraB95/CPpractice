#include <bits/stdc++.h>
using namespace std;
    

int main()
{
    int n;
    cin>>n;
   if(n%100)
   {
       cout<<(n/100)+1;
   }
   else
   {
       cout<<n/100;
   }
}