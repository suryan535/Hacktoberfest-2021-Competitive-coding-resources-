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
    int n;
    cin >> n;
     
    // Taking the input 
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    

    // Defining the Prefix Sum
    ll pref1[n];
    for (int i = 0; i < n; i++)
    {
        pref1[i] = arr[i];
        if (i)
        {
            pref1[i] += pref1[i - 1];
        }
    }

    // Using the classic finding the next minimum element in O(N) using Stack
    // A very famous trick

    vector<int> rt(n, n);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        if (st.empty() == true || pref1[i] >= pref1[st.top()])
            st.push(i);
        else
        {
            while (st.empty() == false && pref1[i] < pref1[st.top()])
            {
                rt[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
    }

    // Finding prefix sums of prefix sums 

    ll pref2[n];
    for (int i = 0; i < n; i++)
    {
        pref2[i] = pref1[i];
        if (i)
        {
            pref2[i] += pref2[i - 1];
        }
    }

    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        /*
        For eny index i we need to find the length of the biggest subarray that is 
        happy and this is possible if the pref1[r]-pref1[l]>=0 and hence 
        pref1[l]<pref1[r].

        Once we find this r using the stack method, we can directly take the sum of 
        the subarrays in the middle using prefix sums as mentioned in the question
        */
        ll term = pref2[rt[i] - 1] - pref2[i];
        ll term2 = 1LL * (rt[i] - 1 - i) * pref1[i];
        res += term - term2;
        // debug2(res, term);
    }
    
    // Handling edge case of when the starting element is not present in the array
    for (int i = 0; i < n; i++)
    {
        if (pref1[i] >= 0)
        {
            res += pref1[i];
        }
        else
            break;
    }

    
    // Outputting the result
    cout << res << "\n";
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