#include <bits/stdc++.h>
using namespace std;

// void insertionSort(vector<int>& v){
//     for(int i=1;i<v.size();i++){
//         int j=i;
//         while(j>0&&v[j-1]>v[j]){
//             swap(v[j],v[j-1]);
//             j--;
//         }
//     }
// }

void insertionSort(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int j = i;
        while (v[j - 1] > v[j] && j > 0)
        {
            swap(v[j], v[j - 1]);
            j--;
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
    for (auto i : v)
        cout << i << " ";
    insertionSort(v);
    cout << endl;
    for (auto i : v)
        cout << i << " ";
}