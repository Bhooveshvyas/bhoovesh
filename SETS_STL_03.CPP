#include <bits/stdc++.h>
using namespace std;

int main()
{
        int q, n;
        map<int, int> m;
        int queries;
        cin >> queries; // Number of queries in this test case
        while (queries--)
        {
            cin >> q >> n;
            if (q == 1)
            {
                m[n]++;
            }
            else if (q == 2)
            {
                m[n]=0;
            }
            else if (q == 3)
            {
                if (m[n]>0)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
        }
    return 0;
}
