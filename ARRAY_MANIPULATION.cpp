#include <bits/stdc++.h>
using namespace std;

/*
MEDIUM LEVEL
COMPLEXITY -> O(M + N + N) = O(N) = 1e7;
*/

const int N = 1e7+10;
long long int ar[N];

int main()
{
    int n, m;
    cin >> n >> m;

    int a, b, k;

    while(m--)
    {
        cin >> a >> b >> k;
        ar[a] += k;
        ar[b + 1] -= k;
    }

    for(int i=1;i<=n;i++){
        ar[i] = ar[i] + ar[i-1];
    }

    int max = ar[1];
    for(int i=1;i<=n;i++){
        if(ar[i]>max){
            max = ar[i];
        }
        // cout<<ar[i];
    }
    cout<<max;
}