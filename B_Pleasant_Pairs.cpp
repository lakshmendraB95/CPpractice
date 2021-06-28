#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll MOD = 998244353;
#define rep(i, e) for (ll i = 0; i < e; i++)
#define endl "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define MAX 200000

int countPairsWithProductK(int arr[], int n, int k)
{
    // Initialize the count
    int count = 0;

    // Initialize empty hashmap.
    bool hashmap[MAX] = {false};

    // Insert array elements to hashmap
    for (int i = 0; i < n; i++)
        hashmap[arr[i]] = true;

    for (int i = 0; i < n; i++)
    {
        int x = arr[i];

        double index = k - x;

        // Checking if the index is a whole number
        // and present in the hashmap
        if (index >= 0 && hashmap[k / x])

            count++;
        hashmap[x] = false;
    }
    return count;
}

int main()
{
    fast_cin();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        rep(i, n)
        {
            cin >> arr[i];
        }
        ll x = 0;
        for (int i = 2; i < (2 * n); i++)
        {
            x += countPairsWithProductK(arr, n, i);
        }
        cout << x << endl;
    }

    return 0;
}