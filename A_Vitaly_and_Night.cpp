#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int x;
    vector<int> v;
    int count=0;
    while(n--)
    {
        for(int i=0;i<2*m;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<v.size();i+=2)
        {
            if(v[i]==1 || v[i+1]==1)
            {
                count++;
            }

        }
    }
    cout<<count;

    return 0;
}