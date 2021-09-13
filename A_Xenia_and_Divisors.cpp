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
 
void solve()
{
    int n;
    cin>>n;
    map<int,int> mp;
    int x;
    rep(i,n)
    {
        cin>>x;
        mp[x]++;
    }
    if(mp[1]==n/3  && mp[2]==n/3 && mp[4]== n/3)
    {
        rep(i,n/3)
        {
            cout<<1<<" "<<2 <<" "<<4<<endl;
        }
    }
    else if (mp[1]==n/3  && mp[2]==n/3 && mp[6] ==n/3)
    {
        rep(i,n/3)
        {
            cout<<1<<" "<<2 <<" "<<6<<endl;
        }
    }
    else if (mp[1]==n/3  && mp[3]==n/3 && mp[6] ==n/3)
    {
        rep(i,n/3)
        {
            cout<<1<<" "<<3<<" "<<6<<endl;
        }
    }
    else if(mp[1]==n/3 && mp[2]+mp[3] == n/3 && mp[6]==n/3)
    {
        rep(i,n/3)
        {
            cout<<1<<" ";
            if(mp[2])
            {
                cout<<2<<" ";
                mp[2]--;
            }
            else
            {
                cout<<3<<" ";
                mp[3]--;
            }
            cout<<6<<endl;
        }
    }
    else if(mp[1]==n/3 && mp[2] == n/3 && mp[6]+mp[4]==n/3)
    {
        rep(i,n/3)
        {
            cout<<1<<" ";
            
            cout<<2<<" ";
            if(mp[4])
            {
                cout<<4<<endl;
                mp[4]--;
            }
            else
            {
                cout<<6<<endl;
                mp[6]--;
            }
        }
    }
    else if(mp[1]==n/3 && mp[2]+mp[3]==n/3 && mp[4]+mp[6]==n/3 && mp[3]<=mp[6])
    {
        rep(i,n/3)
        {
        cout<<1<<" ";
            if(mp[2])
            {
                cout<<2<<" ";
                mp[2]--;
            }
            else
            {
                cout<<3<<" ";
                mp[3]--;
            }
             if(mp[4])
            {
                cout<<4<<endl;
                mp[4]--;
            }
            else
            {
                cout<<6<<endl;
                mp[6]--;
            }
        }
    }
    else
    {
        cout<<-1<<endl;
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