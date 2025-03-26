#include <bits/stdc++.h>
using namespace std;
#define shivam \
    int t;     \
    cin >> t;  \
    while (t--)
#define yy cout << "YES" << endl;
#define no cout << "NO" << endl;
#define N 10000000
#define mod 1000000007
#define dom 998244353
#define loop(n) for (int i = 0; i < (n); i += 1)
#define int long long
#define pr(x) cout << x << endl;
#define print(x)                       \
    for (int i = 0; i < x.size(); i++) \
        cout << x[i] << " ";           \
    cout << endl;
long long calc(long long k, long long l, long long t, long long cntTasks)
{
    return k * l + min(2 * k, cntTasks) * t;
}

signed main()
{
    shivam
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (min > v[i])
                min = v[i];
        }
        if (v[0] > min)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}