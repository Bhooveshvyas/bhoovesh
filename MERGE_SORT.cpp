// #include <bits/stdc++.h>
// using namespace std;

// void merge(int *a, int s, int e)
// {
//     int mid = (s + e) / 2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid + 1;
//     int *first = new int[len1];
//     int *second = new int[len2];
//     int k = s;
//     for (int i = 0; i < len1; i++)
//         first[i] = a[k++];
//     k = mid + 1;
//     for (int i = 0; i < len2; i++)
//         second[i] = a[k++];
//     int index1 = 0;
//     int index2 = 0;
//     k = s;
//     while (index1 < len1 && index2 < len2)
//     {
//         if (first[index1] < second[index2])
//             a[k++] = first[index1++];
//         else
//             a[k++] = second[index2++];
//     }
// }

// void mergeSort(int *a, int s, int e)
// {
//     if (s >= e)
//         return;
//     int mid = s + (e - s) / 2;
//     // left part sort
//     mergeSort(a, s, mid);

//     // right part sort
//     mergeSort(a, mid + 1, e);

//     // merge
//     merge(a, s, e);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//         cin >> i[a];
//     mergeSort(a, 0, n - 1);
//     for (auto i : a)
//         cout << i << " ";
// }

#include <bits/stdc++.h>
using namespace std;
const int N = 10e5 + 10;
int a[7] = {1, 8, 5, 6, 7, 3, 2};

void merge(int l, int r, int mid)
{
    int l_sz = mid - l + 1;
    int L[l_sz + 1];
    int r_sz = r - mid;
    int R[r_sz + 1];
    for (int i = 0; i < l_sz; i++)
    {
        L[i] = a[i + l];
    }
    for (int i = 0; i < r_sz; i++)
    {
        R[i] = a[i + mid + 1];
    }
    L[l_sz] = R[r_sz] = INT_MAX;
    int l_i = 0;
    int r_i = 0;
    for (int i = l; i <= r; i++)
    {
        if (L[l_i] <= R[r_i])
        {
            a[i] = L[l_i];
            l_i++;
        }
        else
        {
            a[i] = R[r_i];
            r_i++;
        }
    }
}
void mergeSort(int l, int r)
{
    int mid = (l + r) / 2;
    if (l == r)
    {
        return;
    }
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    merge(l, r, mid);
}
int main()
{
    // int a[7]={1,8,5,6,7,3,2};
    mergeSort(0, 6);
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }
}