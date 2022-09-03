#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define lli long long int
#define mod 1000000007
#define vi vector<int>
#define vlli vector<long long int>
#define nw "\n"

// Given integers A, B and N, you should calculate the GCD of A^N + B^N and | A - B | ∣A−B∣.
// 1 ≤ A,B,N ≤ 10^12 and B ≤ A

/*
Input:
2
10 1 1
9 1 5

Output:
1
2
*/

lli power(lli a, lli n, lli modulo)
{
    lli result = 1;

    while (n)
    {
        if (n % 2 != 0)
        {
            result = ((result  % modulo) * (a  % modulo)) % modulo;
            n--;
        }

        a = ((a  % modulo) * (a  % modulo)) % modulo;
        n /= 2;
    }

    return result;
}

lli gcd(lli a, lli b, lli n)
{
    if (a == b)
    {
        return (power(a, n, mod) + power(b, n, mod)) % mod;
    }

    lli candidate = 1;
    lli num = a - b;

    for (lli i = 1; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            lli tmp = (power(a, n, i) + power(b, n, i)) % i;
            if (tmp == 0)
            {
                candidate = max(candidate, i);
            }

            tmp = (power(a, n, num / i) + power(b, n, num / i)) % (num / i);
            if (tmp == 0)
            {
                candidate = max(candidate, num / i);
            }
        }
    }

    return candidate % mod;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif

    lli t;
    cin >> t;

    while(t--)
    {
        lli a, b, n;
        cin >> a>>b>>n;

        cout<<gcd(a, b, n)<<nw;
    }

    return 0;
}
