#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
 


 int SieveOfEratosthenes(int n)
{
    // Create a boolean array
    // "prime[0..n]" and initialize
    // all entries it as true.
    // A value in prime[i] will
    // finally be false if i is
    // Not a prime, else true.
    bool prime[50001]{true};
 
    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p] && p%2 && n%p==0)
        {
            return p;
        }
    
    return -1;
}

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     int n;
     int odd=0;
     cin>>n;
     if(n==1)
     {
         cout<<"FastestFinger"<<endl;
     }
     else if(n==2)
     {
         cout<<"Ashishgup"<<endl;
     }
     else
     {
     
     
     if(n%2!=0)
     {
         cout<<"Ashishgup"<<endl;
     }
     else
     {
        odd=SieveOfEratosthenes(n);
        if(odd>1 && (n/odd !=2))
        {
             cout<<"Ashishgup"<<endl;
        }
        else
        {
             cout<<"FastestFinger"<<endl;
        }
        
     }
    }
     
 }
}