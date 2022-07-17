#include <iostream>
#include <string>
#include <vector>

#define ll long long

using namespace std;

// Mark and Lightbulbsy : https://codeforces.com/contest/1705/problem/D
// Editorial            : https://codeforces.com/blog/entry/104881

/*
Input:
4
4
0100
0010
4
1010
0100
5
01001
00011
6
000101
010011

Output:
2
-1
-1
5
*/

//TC: O(n)
void solve()
{
    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    vector<ll> pos_s, pos_t;

    // Operation cannot change the first or the last bit
    // So if both are different then return -1
    if ((s[0] != t[0]) || (s[n - 1] != t[n - 1])) 
    {
        cout << -1 << "\n";
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
            pos_s.push_back(i);

        if (t[i] != t[i + 1])
            pos_t.push_back(i);
    }

    if (pos_s.size() != pos_t.size())
    {
        cout << -1 << "\n";
    }
    else
    {
        int k = pos_s.size();
        ll ans = 0;
        for (int i = 0; i<k; ++i)
        {
            ans += abs(pos_s[i] - pos_t[i]);
        }
        cout << ans << "\n";
    }
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