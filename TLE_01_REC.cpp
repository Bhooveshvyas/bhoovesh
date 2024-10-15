#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n <= 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int sum_0_n(int n, int x)
{
    if (n == x)
        return x;
    return sum_0_n(n + 1, x) + n;
}

int main()
{
    int n;
    cin >> n;
    
}