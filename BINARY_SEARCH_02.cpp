#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &v, int target)
{
    int s = 0, e = v.size() - 1, mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (v[mid] == target)
        {
            return mid;
        }
        else if (mid > s && v[mid - 1] == target)
        {
            return mid - 1;
        }
        else if (mid < e && v[mid + 1] == target)
        {
            return mid + 1;
        }
        if (v[mid] < target)
        {
            s = mid + 2;
        }
        else
        {
            e = mid - 2;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin >> target;
    cout << binary_search(v, target);
}