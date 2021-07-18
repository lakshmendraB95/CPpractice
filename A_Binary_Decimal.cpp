#include<iostream>
using namespace std;

int answer = 0;


int psuedoBinary(int n)
{
	int answer =0;
	while (n > 0)
	{				
		int temp = n, m = 0, p = 1;
		while (temp)
		{
			int rem = temp % 10;
			temp = temp / 10;

			if (rem != 0)
				m += p;
			
			p *= 10;
		}
		
		answer++;
		n = n - m;
	}
    return answer;
}


int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<psuedoBinary(n)<<endl;
    }
	return 0;
}