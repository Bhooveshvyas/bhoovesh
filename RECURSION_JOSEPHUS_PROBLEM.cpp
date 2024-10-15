#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &v, int index, int k, int &ans)
{
    if (v.size() == 1)
    {
        ans = v[0];
        return;
    }
    index = (k + index) % v.size();
    v.erase(v.begin() + index);
    solve(v, index, k, ans);
    return;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = i + 1;
    }
    int index = 0;
    k--;
    int ans;
    solve(v, index, k, ans);
    cout << ans;
}