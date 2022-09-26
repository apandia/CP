#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
#include <set>

using namespace std;

#define lli long long int
#define mod 1000000007
#define vi vector<int>
#define vlli vector<long long int>
#define nw "\n"

void solve()
{
    int n, c;
    cin >> n >> c;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> m;
    for (auto val : arr)
    {
        m[val]++;
    }

    int cost = 0;
    for (auto it : m)
    {
        cost += min(it.second, c);
    }

    cout << cost << nw;
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

    while (t--)
    {
        solve();
    }

    return 0;
}
