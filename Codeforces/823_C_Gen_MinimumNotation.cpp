#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
#include <set>
#include <string>

using namespace std;

#define lli long long int
#define mod 1000000007
#define vi vector<int>
#define vlli vector<long long int>
#define nw "\n"

void solve()
{
    string s;
    cin >> s;

    char minimum = '9';
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] <= minimum)
        {
            minimum = s[i];
        }
        else
        {
            s[i] = min((char)(s[i]+1), (char)'9');
        }
    }

    sort(s.begin(), s.end());
    cout << s << nw;
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
