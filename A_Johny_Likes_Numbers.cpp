

    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
       ios::sync_with_stdio(false);
       cin.tie(0);
       int n,k;
       cin>>n>>k;
       int y = n/k;
       if(n>k)  
       { 
          cout<<(k*(y+1));
       }
       else if(n<k)
       {
          cout<<k;
       }
       else
       {
          cout<<k*2;
       }
     
    }