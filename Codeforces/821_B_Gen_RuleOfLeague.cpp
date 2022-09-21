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
    int n, x, y;
    cin >> n >> x >> y;

    if ((x == 0 && y == 0) || (x != 0 && y != 0))
    {
        cout << -1 << nw;
        return;
    }

    if (x < y)
        swap(x, y);

    if ((n - 1) % x != 0)
    {
        cout << -1 << nw;
        return;
    }

    int winner = 1;
    int numWin = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        if (numWin == x)
        {
            winner = i+1;
            numWin = 0;
        }

        numWin++;
        cout << winner <<" ";
    }
    cout << nw;
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
