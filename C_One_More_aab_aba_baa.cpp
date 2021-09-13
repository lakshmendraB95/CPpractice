#include <bits/stdc++.h>
using namespace std;
  

void permute(string str, long int n)
{
   
    sort(str.begin(), str.end());
  
   
    long int i = 1;
    do {

        if (i == n)
            break;
  
        i++;
    } while (next_permutation(str.begin(), str.end()));
  
   
    cout << str;
}
  

int main()
{
    string s;
    int k;
    cin>>s>>k;
    permute(s, k);
    return 0;
}