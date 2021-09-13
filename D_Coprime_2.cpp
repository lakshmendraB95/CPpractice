#include <bits/stdc++.h>
using namespace std;
 
// function to check for gcd
bool coprime(int a, int b)
{  
    return (__gcd(a, b) == 1);
}
 


 
// driver code
int main()
{
   
    int n,m;
    cin>>n>>m;
    int k[m];
    int arr[n];
   for(int i =0 ; i<m ;i++)
    {
        k[i]=i+1;
    }  
    for(int i=0; i<n ; i++)
    {
        cin>>arr[i];
    }
    set<int> s;
    for(int i = 0 ; i< n  ; i++)
    {
        for(int j =0 ; j<m; j++)
        {
            if(!coprime(arr[i],k[j]))
            {
                s.insert(k[j]);
                break;
            }
        }
    }
    cout<<s.size()<<endl;
    for(auto it : s)
    {
        cout<<it<<endl;
    }
    return 0;
}