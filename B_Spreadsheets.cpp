#include <bits/stdc++.h>  
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mod               1000000007
#define modadd(a,b,c)     ((a%c)+(b%c))%c
#define modmul(a,b,c)     ((a%c)*(b%c))%c
#define modsub(a,b,c)     ((a%c)-(b%c))%c


string x = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void solve()
{
    string s;
    cin>>s;
    bool flag = false;

    for(int i = 0 ; i<int(s.length()); i++)
    {
        if(!isalpha(s[i]))
        {
            flag =true;
        }
        if(flag&&isalpha(s[i]))
        {
            flag =false;
            break;
        }
    }
    if(flag)
    {
        string column="";
        int i=0;
        while(isalpha(s[i])&&i<int(s.length()))
        {
            i++;
        }
        column=s.substr(0,i);
        string row;
        int length=s.length();
        row=s.substr(i,length-i);
        int c=0;
        reverse(column.begin(),column.end());
        // cout<<column<<endl;
        // cout<<column.size()<<endl;
        while(column.size())
        {
            c*=26;
            int y = column.back()-'A'+1;
            c+=y;
            column.pop_back();
        }
        cout<<"R"<<row<<"C"<<c<<endl;
    }
    else
    {
    
      int i=1;
      while(!isalpha(s[i]))
        {
            i++;
        }
        string row = s.substr(1,i-1);
        int r= stoi(row);
        // cout<<r<<endl;
        i++;
        int a=i;
         while(!isalpha(s[i])&& i<int(s.length()))
        {
           i++;
        }
        string column = s.substr(a,i);
        int c = stoi(column);
        // cout<<c<<endl;
        column="";
        while(c)
        {
           
                int q = c%26;
                q = (q == 0? 25: q-1);
                if(q==25)
                {
                    c--;
                }
                c/=26;
                column+=(char)('A'+q);
        }
        reverse(column.begin(),column.end());
        cout<<column+row<<endl;
    }
}

int main()
{
    fast_cin();
   ll t;
    cin >> t;
 while(t--)
 {
 solve();
  }
 // solve();
    return 0;
}