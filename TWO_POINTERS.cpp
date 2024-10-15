#include <bits/stdc++.h>
using namespace std;

void sortArrayOfZerosAndOne(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0, j = n - 1; i < j;)
    {
        if (arr[i] == arr[j] && arr[i] == 1)
        {
            j--;
        }
        else if (arr[i] == arr[j] && arr[i] == 0)
        {
            i++;
        }
        else if (arr[i] > arr[j])
        {
            swap(arr[i], arr[j]);
            i++;
        }
        else if (arr[i] < arr[j])
        {
            j--;
            i++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sortArrayOfZerosAndOne(arr); // Call the sorting function

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}