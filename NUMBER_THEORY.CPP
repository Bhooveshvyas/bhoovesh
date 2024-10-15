#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int ct = 0, temp = 0;
    for (int on = 6; on <= m; on++)
    {
        bool f1 = false, f2 = false;
        temp = 0;
        int n = on;
        while (n % 2 == 0)
            f1 = true, n /= 2;
        if (f1)
            temp++;
        for (int i = 3; i <= n; i += 2)
        {
            f2 = false;
            while (n % i == 0)
            {
                f2 = true;
                // cout << i << " ";
                n /= i;
            }
            if (f2)
                temp++;
        }
        // cout << endl;
        if (temp == 2)
        {
            ct++;
        }
    }
    cout << ct << endl;
}