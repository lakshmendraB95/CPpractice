    #include <algorithm>
    #include <iostream>
    #include<string>
     
    using namespace std;
    int check(string w ,int r , int y)
    {
           int count =0;
           for(int i = r-y; i<r ; i++)
           {
               if(w[i]=='0')
               {
                   ++count;
               }
           }
            for(int i = r+1; i<=r+y ; i++)
           {
               if(w[i]=='0')
               {
                   ++count;
               }
           }
           if(count==2*y)
           {
               return 1;
           }
           else
           {
               return 0;
           }
           
    }
    int main()
    {
       int t,i;
       string input;
       cin>>t;
       while(t--)
       {   int n,k,answer=0;
           cin>>n>>k;
           cin>>input;
               for(int i=k+1; i<n-k;i++)
               {
                   if (check(input,i,k)==1 && input[i]=='0')
                   {
                       ++answer;
                       input[i]='1';
                   }    
               }
             if(input[0]=='0')
           {
               bool flag=false;
               for(int i = 0 ; i<min(n,k+1) ; i++)
               {
                   if(input[i]!='0')
                   {
                       flag = true;
                   }
               }
               if(!flag)
               {
               input[0]='1';
               answer++;
               }
           }
           if(input[n-1]=='0' && n-1>k)
           {
               bool flag = true;
               for(int i =  n-1 ; i>=max(n-k-1,0);i--)
               {
                   if(input[i]=='1')
                   {
                       flag =false;
                       break;
                   }
               }
               if(flag)
               {
               input[n-1]='1';
               answer++;
               }
           }
           cout<<answer<<endl;
       }
    }