    #include <bits/stdc++.h>  
     
    using namespace std;
     
    typedef long long ll;
    ll MOD = 998244353;
    #define rep(i,e) for(ll i = 0; i < e; i++)
    #define endl "\n"
    #define dbg(x) cout<<#x<<" = "<<x<<endl
    #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
    #define all_v(x) (x).begin(), (x).end()
    #define all_a(a,n) a, a+n
    #define max_a(a,n) *max_element(all_a(a,n));
    #define min_a(a,n) *min_element(all_a(a,n));
    #define max_v(v) *max_element(all_v(v));
    #define min_v(v) *min_element(all_v(v));
     
     
    int main()
    {
        fast_cin();
        string s,t;
        cin>>s>>t;
        int y,w;
        y=w=0;
        map<char,int> mp1;
        map<char,int> mp2;
        rep(i,t.length())
        {
            mp2[t[i]]++;
        }
        rep(i,s.length())
        {
            mp1[s[i]]++;
        }
        rep(i,s.length())
        {
            char u;
            int a = mp1[s[i]];
            int b =  mp2[s[i]];
            if(islower(s[i]))
            {
                u = toupper(s[i]);
            }
            else
            {
                u = tolower(s[i]);
            }
            if(mp1[s[i]]==mp2[s[i]])
            {
                y+=mp1[s[i]];
                mp1[s[i]]=mp2[s[i]]=0;
            }
            else if(a>b)
            {
                y+=b;
                mp2[s[i]]=0;
                mp1[s[i]]-=b;
                w+= min(mp1[s[i]],mp2[u]);
                mp2[u]-=min(mp1[s[i]],mp2[u]);
                mp1[s[i]]-=min(mp1[s[i]],mp2[u]);
            }
            else
            {
                y+=a;
                w+=mp2[u];
                mp1[s[i]]=0;
                mp2[s[i]]-=a;
            }
        }
        cout<<y<<" "<<w;
        return 0;
    }