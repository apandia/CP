#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//Codechef July 2022 LuncTime: https://www.codechef.com/submit/MAKEPALAGAIN?tab=statement

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string odd, even;

    for (int i = 0; i < n; i += 2)
        even += s[i];

    for (int i = 1; i < n; i += 2)
        odd += s[i];

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    cout << ((odd == even) ? "YES" : "NO") << "\n";
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
