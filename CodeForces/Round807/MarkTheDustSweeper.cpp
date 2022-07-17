#include <iostream>
#include <vector>

#define ll long long

using namespace std;

// Mark The Dust Sweeper: https://codeforces.com/contest/1705/problem/B
//Editorial             : https://codeforces.com/blog/entry/104881

/*
Input:
4
3
2 0 0
5
0 2 0 2 0
6
2 0 3 0 4 6
4
0 0 0 10

Output:
3
5
11
0
*/

//TC: O(n)
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll result = 0;

    int counter = 0;
    while (counter < n && arr[counter] == 0)
        counter++;

    for (int i = counter; i < n-1; i++)
    {
        result += arr[i];

        if (arr[i] == 0)
            result++;
    }

    cout << result << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

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