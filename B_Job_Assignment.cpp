#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
    int n;
    cin>>n;
    int a[n],b[n];
    int sum=0;
    int min_sum=INT_MAX;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>a[i]>>b[i];
        sum=a[i]+b[i];
        if(sum<min_sum)
        {
            min_sum=sum;
        }
    }
    int min_max = INT_MAX;
    for(int i = 0 ; i< n ; i++)
    {
     for(int j= 0 ; j<n ; j++)
     {
         if(max(a[i],b[j])<min_max && i!=j)
         {
             min_max=max(a[i],b[j]);
         }
     }   
    }
    cout<<min(min_max,min_sum);
}