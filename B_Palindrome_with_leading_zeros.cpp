#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   string s,m,n;
   int count=0;
   cin>>s;
   m=s;
   reverse(s.begin(),s.end());
   for(int i = 0 ; i<int(s.length()) ; i++)
   {
       if(s[i]=='0')
       {
           count++;
       }
       else
       {
           break;
       }
   }
   for(int i =0 ; i<count; i++)
   {
       s=s+'0';
       m='0'+m;
   }
   if(s==m)
   {
       cout<<"Yes";
   }
   else
   {
       cout<<"No";
   }
}