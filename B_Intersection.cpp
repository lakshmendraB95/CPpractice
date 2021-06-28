#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int max = 0;
    int min = 10000;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if (min > b[i])
        {
            min = b[i];
        }
    }
    if (min >= max)
    {
        cout << min - max + 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}