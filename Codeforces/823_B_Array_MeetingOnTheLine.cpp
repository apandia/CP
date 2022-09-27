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
    int n;
    cin >> n;

    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    vector<int> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }

    int minimum = INT_MAX;
    int maximum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, x[i] + t[i]);
        minimum = min(minimum, x[i] - t[i]);
    }

    int sum = minimum + maximum;
    cout << sum / 2;
    if (sum % 2 != 0)
        cout << ".5";

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
