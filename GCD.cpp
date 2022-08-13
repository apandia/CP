#include <iostream>

using namespace std;

// Find GCD of 2 numbers

/*
Input:
5       //t
5 20    //a,b of t1
6 6	//a,b of t2
12 2    //a,b of t3
50 20   //a,b of t4
1 1	//a,b of t5

Output:
GCD of 5 and 20 = 5
GCD of 6 and 6 = 6
GCD of 12 and 2 = 2
GCD of 50 and 20 = 10
GCD of 1 and 1 = 1
*/
int gcd(int a, int b)
{
    if (a == 0)
        return b;

    if (b == 0)
        return a;

    if (a > b)
        return gcd(a - b, b);
    else
        return gcd(a, b - a);
}

void solve()
{
    int a, b;
    cin >> a >>b;

    cout << "GCD of " << a << " and " << b << " = " << gcd(a, b) << "\n";
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
