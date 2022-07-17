#include <iostream>
#include <string>
#include <vector>

#define ll long long

using namespace std;

// Mark and His Unfinished Essay: https://codeforces.com/contest/1705/problem/C
//Editorial                     : https://codeforces.com/blog/entry/104881

/*
2           --> (t)     Num Test case
4 3 3       --> (n,c,q) 4 = length of string, 3 = num copy paste operation, 3 = num queries
mark        --> (s)     input string
1 4         --> (l,r)   copy[1]     --> 1-4 (mark)   --> output  --> markmark
5 7         --> (l,r)   copy[2]     --> 5-7 (mar)    --> output  --> markmarkmar
3 8         --> (l,r)   copy[3]     --> 3-8 (rkmark) --> output  --> markmarkmarrkmark
1           --> (k)     query[1]    --> pos=1   --> output  --> m
10          --> (k)     query[2]    --> pos=10  --> output  --> a
12          --> (k)     query[3]    --> pos=12  --> output  --> r
7 3 3
creamii
2 3
3 4
2 9
9
11
12

Output:
m
a
r
e
a
r
*/

//TC: 
void solve()
{
    int n, c, q;
    cin >> n >> c >> q;

    string s;
    cin >> s;

    vector<ll> left(c + 1), right(c + 1), diff(c + 1);
    left[0] = 0;
    right[0] = n;

    for (int i = 1; i <= c; i++)    //1 based indexing used in problem like l=1, r=4 where there is 4 char in string mark
    {
        ll l, r;
        cin >> l >> r;

        l--;    //so that it will use with 0 based string indexing when using string
        r--;

        left[i] = right[i - 1];
        right[i] = left[i] + (r - l + 1);

        diff[i] = left[i] - l;
    }

    while (q--)
    {
        ll k;
        cin >> k;

        k--;

        for (int i = c; i >= 1; i--)
        {
            if (k < left[i])
                continue;
            else
                k -= diff[i];
        }
        cout << s[k] << "\n";
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