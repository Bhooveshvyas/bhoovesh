#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, i, k, ma;
    cin >> t;
    while (t--)
    {
        ma = 1, k = 1;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                k++;
            }
            else
            {
                k = 1;
            }
            ma = max(ma, k);
        }
        cout << n - ma << endl;
    }
    return 0;
}
