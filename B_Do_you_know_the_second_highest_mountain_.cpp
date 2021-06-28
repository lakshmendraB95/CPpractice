#include <bits/stdc++.h>
using namespace std;
  

  

int main()
{
    int n;
    cin>>n;
    int height[n];
    string name[n];
    int max_index,m,s_max,s_index;
    max_index=m=s_max=0;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>name[i]>>height[i];
        if(height[i]>=m)
        {
            s_max = m;
            m=height[i];
            s_index=max_index;
            max_index=i;
        }
        else if(height[i]>s_max && height[i]<m)
        {
            s_max=height[i];
            s_index=i;
        }

    }
    cout<<name[s_index];
    return 0;
}