#include <bits/stdc++.h>  
using namespace std;
 
typedef long long ll;
// ll MOD = 9982443n3;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mod               1000000007
#define modadd(a,b,c)     ((a%c)+(b%c))%c
#define modmul(a,b,c)     ((a%c)*(b%c))%c
#define modsub(a,b,c)     ((a%c)-(b%c))%c
 
void solve()
{
    int n;
    cin>>n;
 char arr[n][n],b[n][n],c[n][n],d[n][n];
 for(int i = 0 ; i<n ; i++)
 {
     for(int j = 0 ; j<n ;j++)
     {
         cin>>arr[i][j];
     }
 }

 for(int i = 0 ; i<n ; i++)
 {
     for(int j = 0 ; j<n ;j++)
     {
         cin>>b[i][j];
     }
 }
int k,l;
k=l=0;
 for(int i = n-1  ; i>=0  ; i--)
 {
     k=0;
     for(int j = 0 ; j<n ;j++)
     {
         d[k++][l]=b[i][j];
     }
     l++;
 }
k=l=0;
 for(int i = 0 ; i<n ; i++)
 {
     l=0;
     for(int j = n-1 ; j>=0 ;j--)
     {
         c[k][l++]=b[i][j];
     }
     k++;
 }
    bool flag1,flag2;
    flag1=flag2=false;
for(int i = 0 ; i<n ; i++)
 {
     for(int j = 0 ; j<n ;j++)
     {
         if(arr[i][j]!=c[i][j])
         {
            flag1=true;
            break;
         }

     }
 }

 for(int i = 0 ; i<n ; i++)
 {
     for(int j = 0 ; j<n ;j++)
     {
         if(arr[i][j]!=d[i][j])
         {
            flag1=true;
            break;
         }

     }
 }
 if(flag1 && flag2)
 {
     cout<<"NO";
     return;
 }
 else
 {
 cout<<"Yes"<<endl;
 }
// rep(i,n)
// {
//     rep(j,n)
//     {
//         cout<<c[i][j];
//     }
//     cout<<endl;
// }

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