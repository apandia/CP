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

    lli ans = 0;

    /*vector<set<int>> res(k, set<int>());
    for (int i = 0; i < n; i++)
    {
        res[i%k].insert(arr[i]);
    }
   
    for (auto it : res)
    {
        ans += (lli)*it.rbegin();
    }*/

    //Below code without set is faster (by 15 ms) and uses less memory (100 kb less)
    vector<int> res(k);
    for (int i = 0; i < n; i++)
    {
        res[i%k] = max(res[i%k], arr[i]);
    }

    for (auto val : res)
    {
        ans += val;
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
