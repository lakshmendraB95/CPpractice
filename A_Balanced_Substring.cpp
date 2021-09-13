#include <iostream>
#include<string>  
using namespace std;
 
typedef long long ll;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

 
void solve()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   for(int i =  0 ; i<n; i++)
   {
       int count_a=0,count_b=0;
       if(s[i]=='a')
       {
           count_a++;
       }
       else
       {
           count_b++;
       }
       for(int j = i+1 ; j<n ;j++)
       {
               if(s[j]=='a')
               {
                   count_a++;
               }
               else
               {
                   count_b++;
               }
               if(count_a==count_b)
               {
                   cout<<i+1<< " " <<j+1<<endl;
                   return;
               }
       }
   }
   cout<<-1<<" "<<-1<<endl;
}

int main()
{
    fast_cin();
   ll t;
    cin >> t;
 while(t--)
 {
 solve();
  }
 // solve();
    return 0;
}