#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
    string s;
    cin>>s;
    for(int i = 0 ; i<int(s.length()); i++)
    {
        if(s[i]=='.')
        {
            break;
        }
        else
        {
            cout<<s[i];
        }
    }
}