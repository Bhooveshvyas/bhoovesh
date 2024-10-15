#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int sum = 0;
    int maxi = v[0];
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        maxi = max(maxi, sum);
        sum = (sum < 0) ? sum = 0 : sum;
    }
    cout << maxi << endl;
}