#include <bits/stdc++.h>
using namespace std;

int partition(int v[], int s, int e)
{
    int pivot = v[s];
    int ct = 0;
    for (int i = s + 1; i <= e; i++)
        (pivot >= v[i]) ? ct++ : ct = ct;
    int pivotIndex = s + ct;
    swap(v[pivotIndex], v[s]);
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (v[i] < v[pivotIndex])
            i++;
        while (v[j] > v[pivotIndex])
            j++;
        if (pivotIndex > i && pivotIndex < j)
        {
            swap(v[i], v[j]);
        }
    }
    return pivotIndex;
}

void quickSort(int v[], int s, int e)
{
    if (s >= e)
        return;
    int pivot = partition(v, s, e);
    quickSort(v, s, pivot - 1);
    quickSort(v, pivot + 1, e);
}

int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    quickSort(v, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}