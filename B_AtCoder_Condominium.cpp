#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   int n,k;
   cin>>n>>k;
   long long int sum;
    sum = (n*((k*(k+1))/2)) + (k*((n*(n+1))/2)*100);
    cout<<sum;
}