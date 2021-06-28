#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
    string s;
    cin>>s;
    for(int i = 0 ; i<s.length(); i+=2)
    {
        if(isupper(s[i]))
        {
            cout<<"No";
            return 0;
        }
    }
    for(int i = 1 ; i<s.length(); i+=2)
    {
        if(islower(s[i]))
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
}