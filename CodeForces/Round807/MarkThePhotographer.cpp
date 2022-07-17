#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Mark the Photographer: https://codeforces.com/contest/1705/problem/A

/*
Input:
3
3 6
1 3 9 10 12 16
3 1
2 5 2 2 2 5
1 2
8 6

Output:
YES
NO
YES
*/

//TC: O(nlogn)      [for sorting]
void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    bool isFeasible = true;

    for (int i = 0; i < n; i++)
    {
        if ((arr[n + i] - arr[i]) < x)
        {
            isFeasible = false;
            break;
        }
    }

    cout << (isFeasible ? "YES" : "NO") << "\n";
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    for (int tc = 0; tc < t; tc++)
    {
        solve();		
    }

    return 0;
}
