#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
    string s;
    cin>>s;
    if(s[0]==s[1] && s[1]==s[2])
    {
        cout<<"Won";
    }
    else
    {
        cout<<"Lost";
    }
}