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
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<set<int>> res(k, set<int>());
    for (int i = 0; i < n; i++)
    {
        res[i%k].insert(arr[i]);
    }

    lli ans = 0;
    for (auto it : res)
    {
        ans += (lli)*it.rbegin();
    }

    cout << ans << nw;
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
