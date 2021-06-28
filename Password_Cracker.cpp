#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
 void checkpassword(char q , int length , string arr[], int arr_len,int index)
 {
     if(q!= arr[arr_len-1][index])
     {
         cout<<"WRONG PASSWORD"<<endl;
     }
     else if()
 }

int main()
{
    fast_cin();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s[n];
        rep(i,n)
        {
            cin>>s[i];
        }
        string q;
        cin>>q;
        checkpassword()
    }
    return 0;
}