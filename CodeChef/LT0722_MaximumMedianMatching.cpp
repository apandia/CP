#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

//Codechef July 2022 LuncTime: https://www.codechef.com/submit/MEDMAXMATCH?tab=statement

/*
Input:
3
1
10
25
3
1 6 6
2 2 7
5
10 4 93 5 16
4 34 62 6 26

Output:
35
8
50
*/

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int start = (n - 1) / 2;
    int end = (n - 1);

    int median = INT_MAX;

    for (int i = start; i < n ; i++)
    {
        median = min(median, (a[i] + b[end]));
        end--;
    }

    cout << median << "\n";
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
