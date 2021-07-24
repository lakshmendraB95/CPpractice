#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, t;
        cin >> s >> t;
        bool flag = false;
        for(int i = 0 ; i<s.length(); i++)
        {
            string s1 ="";
            s1+=s[i];
            string s2 = s1;
            for(int j = i ; j<s.length();j++)
            {
                if(j!=i)
                {
                    s2+=s[j];
                }
                string s3=s2;
                for(int k = j ; k>=0 ;k--)
                {
                    if(k!=j)
                    {
                        s3+=s[k];
                    }
                    if(s3==t)
                    {
                        flag=true;
                    }
                }
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
        return 0;
    }