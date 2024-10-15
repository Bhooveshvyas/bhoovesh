#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1 || n == 2)
        {
            cout << 1 << endl;
            continue;
        }
        int maxi = 0;
        int lastpowerof2 = 0;
        while ((1 << lastpowerof2) <= n)
            lastpowerof2++;
        lastpowerof2--;
        int minsetbits = (1 << (lastpowerof2 - 1));
        int currsetbits = (n - (1 << lastpowerof2) + 1);
        cout<<lastpowerof2<<endl;
        cout << currsetbits << " " << minsetbits << endl;
    }
}