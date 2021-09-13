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
 
 
int main()
{
    fast_cin();
    int n;
    cin>>n;
    int a[n],b[n];
    int count=0;
    set<int> s;
    set<int> s1;
    int  ans[n];
    int ans1[n];
    set<int> k;
    set<int> l;
    rep(i,n)
    {
        cin>>a[i];
    }
    rep(i,n)
    {
        cin>>b[i];
        if(a[i]==b[i])
        {
            s.insert(b[i]);
            s1.insert(b[i]);
        }
        
    }
    rep(i,n)
    {
        if(a[i]==b[i])
        {
            ans[i]=a[i];
            k.insert(b[i]);
            s.insert(a[i]);
        }
        else
        {
            if(s.count(a[i]) && !s.count(b[i]))
            {
                ans[i]=b[i];
                s.insert(b[i]);
                k.insert(b[i]);
            }
            else if(s.count(b[i]) && !s.count(a[i]))
            {
                ans[i]=a[i];
                s.insert(a[i]);
                k.insert(a[i]);
            }
            else if(s.count(b[i]) && s.count(a[i]))
            {
                for(int j =1 ;j<=n ;j++)
                {
                    if(!s.count(j))
                    {
                        ans[i]=j;
                        s.insert(j);
                        k.insert(j);
                    }
                }
            }
            else
            {
                if(!count)
                {
                ans[i]=b[i];
                k.insert(b[i]);
                s.insert(b[i]);
                count++;
                }
                else
                {
                    ans[i]=a[i];
                    k.insert(a[i]);
                    s.insert(a[i]);
                }
            }
        }
    }
    count=0;
    rep(i,n)
    {
        if(a[i]==b[i])
        {
            ans1[i]=a[i];
            s1.insert(a[i]);
            l.insert(b[i]);
        }
        else
        {
            if(s1.count(a[i]) && !s1.count(b[i]))
            {
                ans1[i]=b[i];
                s1.insert(b[i]);
                l.insert(b[i]);
            }
            else if(s1.count(b[i]) && !s1.count(a[i]))
            {
                ans1[i]=a[i];
                s1.insert(a[i]);
                l.insert(a[i]);
            }
            else if(s1.count(b[i]) && s1.count(a[i]))
            {
                for(int j =1 ;j<=n ;j++)
                {
                    if(!s1.count(j))
                    {
                        ans1[i]=j;
                        s1.insert(j);
                        l.insert(j);
                    }
                }
            }
            else
            {
                if(!count)
                {
                ans1[i]=a[i];
                l.insert(a[i]);
                s1.insert(a[i]);
                count++;
                }
                else
                {
                    ans1[i]=b[i];
                    l.insert(b[i]);
                    s1.insert(b[i]);
                }
            }
        }
    }
    int count1,count2;
    count1=0;
    count2=0;
  rep(i,n)
  {
      if(ans[i]!=a[i])
      {
          count1++;
      }
      if(ans[i]!=b[i])
      {
          count2++;
      }
  }
  if(count1<2 && count2<2)
  {
      rep(i,n)
      {
          cout<<ans[i]<<" ";
      }
  }
  else
  {
      rep(i,n)
      {
          cout<<ans1[i]<<" ";
      }
  }
    return 0;
}