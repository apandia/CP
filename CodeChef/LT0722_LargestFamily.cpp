#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

//Codechef July 2022 LuncTime: https://www.codechef.com/submit/LARGEFAM?tab=statement

void solve()
{
    int n;
    cin >> n;

    vector<ll> claim(n);
    for (int i = 0; i < n; i++)
    {
        cin >> claim[i];
    }

    sort(claim.begin(), claim.end());

    int truthParent = 0;
    ll totalChildren = 0;

    for (int i = 0; i < n ; i++)
    {
        if (totalChildren + claim[i] < n)
        {
            totalChildren += claim[i];
            truthParent++;
        }
    }

    cout << truthParent << "\n";
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