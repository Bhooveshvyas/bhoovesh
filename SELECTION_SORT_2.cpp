#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(v[i]>v[j])swap(v[i],v[j]);
        }
     }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    selectionSort(v, n);
    for (auto i : v)
        cout << i << " ";
}