#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i != n / i)
                v.push_back(n / i);
        }
    }
}