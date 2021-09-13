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

bool canFormPalindrome(string a)
{
    // bitvector to store
    // the record of which character appear
    // odd and even number of times
    int bitvector = 0, mask = 0;
    for (int i=0; a[i] != '\0'; i++)
    {
        int x = a[i] - 'a';
        mask = 1 << x;
  
        bitvector = bitvector ^ mask;
    }
  
    return (bitvector & (bitvector - 1)) == 0;
}
 
void solve()
{
    string s;
    cin>>s;
    string t;
    t=s;
    reverse(t.begin(),t.end());
    if(s.length()==1)
    {
        cout<<"First"<<endl;
        return;
    }
    sort(s.begin(),s.end());
    if(canFormPalindrome(s))
    {
        cout<<"First"<<endl;
        return;
    }
    if(s.length()%2)
    {
        cout<<"First"<<endl;
    }
    else
    {
        cout<<"Second"<<endl;
    }
}

int main()
{
    fast_cin();
   // ll t;
    //cin >> t;
 //while(t--)
 // {
 // solve();
  //}
 solve();
    return 0;
}