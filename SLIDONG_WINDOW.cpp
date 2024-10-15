#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int maxisum = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int i = 0, j = 0;
    int sum = 0;
    while (j < n)
    {
        int size = j - i + 1;
        sum += v[j];
        if (size < k)
            j++;
        else if (size == k)
        {
            maxisum = max(maxisum, sum);
            sum -= v[i];
            i++;
            j++;
        }
    }
    cout << maxisum << endl;
    // int n;cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    //     cin >> v[i];
    // int k;
    // cin >> k;
    // int i = 0, j = 0;
    // int sum = 0, maxisum = 0;
    // while (j < n)
    // {
    //     int windowsize=j-i+1;
    //     sum += v[j];
    //     if (windowsize < k)
    //         j++;
    //     else if (windowsize == k)
    //     {
    //         maxisum = max(maxisum, sum);
    //         sum -= v[i];
    //         i++, j++;
    //     }
    // }
    // cout<<maxisum<<endl;
}