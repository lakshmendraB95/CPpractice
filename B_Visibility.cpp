#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   int w,h,x,y;
   cin>>h>>w>>x>>y;
   string s[h];
   int count=1;
   for(int i = 0; i <h ; i++)
   {
       cin>>s[i];
   }
   x--;
   y--;
   
   for(int  i = x-1  ; i>=0 ; i--)
   {
       if(s[i][y]=='#')
       {
           break;
       }
       else
       {
           count++;
       }
   }
   for(int  i = x+1  ; i<h ; i++)
   {
       if(s[i][y]=='#')
       {
           break;
       }
       else
       {
           count++;
       }
   }
   for(int  i = y-1  ; i>=0 ; i--)
   {
       if(s[x][i]=='#')
       {
           break;
       }
       else
       {
           count++;
       }
   }
   for(int  i = y+1  ; i<w ; i++)
   {
       if(s[x][i]=='#')
       {
           break;
       }
       else
       {
           count++;
       }
   }
   
   cout<<count;

}