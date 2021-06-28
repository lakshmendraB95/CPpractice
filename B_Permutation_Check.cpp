#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   int n;
   cin>>n;
   set<int> s;
   int x;
   for(int i =0 ; i<n ; i++)
   {
       cin>>x;
       s.insert(x);
   }
   if(s.size()==n)
   {
       cout<<"Yes";
   }
   else
   {
       cout<<"No";
   }
}