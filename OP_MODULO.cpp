#include <bits/stdc++.h>
using namespace std;

int f(long long int n)
{
    int sum = 0;
    for (int i = 2; i < n; i++)
    {
        int rem = n % i;
        sum += rem;
    }
    return sum;
}

int main()
{
    long long int l, r;
    cin >> l >> r;
    long long int ans = 0;
    for (int i = l; i <= r; i++)
    {
        if (f(i) == f(i - 1))
        {
            ans = ans + i;
            cout << i << ' ';
        }
    }
}
