#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FAST_IO ios_base::sync_with_stdio(false)
template <class T, class V>
ostream &operator<<(ostream &os, const pair<T, V> &curr)
{
    os << "{" << curr.first << "|" << curr.second << "}";
    return os;
}
#define debug(x)           \
    cout << #x << ": [ ";  \
    for (auto &aa : x)     \
        cout << aa << " "; \
    cout << "]\n"
#define debug1(x) cout << "## " << #x << " : " << x << " ##\n"
#define debug2(x, y) cout << "## " << #x << " : " << x << " | " << #y << " : " << y << " ##\n"
#define sz(x) int(x.size())

const int MOD = 1e9 + 7;

void solve()
{
    // Taking the input
    int m, n, p;
    cin >> m >> n >> p;
    
    // Storing the values in a 2D array
    ll arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    // Subtracting to use 0 based indexing
    p--;
    ll ans = 0;
    for (int j = 0; j < n; j++)
    {
        /* Since we want to find the deficit of steps from our to the 
           person with the maximum steps.
           We will find the maximum steps in the particular day
          */
        ll mx = arr[p][j];
        for (int i = 0; i < m; i++)
        {
            mx = max(mx, arr[i][j]);
        }

        // Then we will subtract to get the extra steps that we need to walk 
        // To have the highest number of steps

        ans += mx - arr[p][j];
    }

    // Printing the output
    cout << ans << "\n";
}

int main()
{

    FAST_IO;

    int test;
    cin >> test;

    for (int i = 1; i <= test; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}