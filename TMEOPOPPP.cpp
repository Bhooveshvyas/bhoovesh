#include <bits/stdc++.h>
using namespace std;
bool divideArray(vector<int> &nums)
{
    int res = 0;
    for (auto &i : nums)
    {
        res ^= i;
        // cout << res << endl;
    }
    return res == 0;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    cout << divideArray(v);
}