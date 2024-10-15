/*
GIVEN ARRAY OF N*N INTEGERS.Q QUERIES IN EACH QUERY GIVEN  A,B,C AND D.INTEGERS.
PRINT THE SUM OF RECTANGLE FORMED IN (A,B)(TOP LEFT) AND (C,D)(BOTTOM RIGHT).

CONSTRAINTS ->
1<=N<=10^3
1<=A[I][J]<=10^9
1<=Q<=10^5
1<=A,B,C,D<=N
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3;
int ar[N][N];
long long int pfs[N][N];

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> ar[i][j];
            pfs[i][j] = pfs[i - 1][j] + pfs[i][j - 1] - pfs[i - 1][j - 1] + ar[i][j];
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        cout << pfs[c][d] - pfs[a - 1][d] - pfs[c][b - 1] + pfs[a - 1][b - 1];
    }
}