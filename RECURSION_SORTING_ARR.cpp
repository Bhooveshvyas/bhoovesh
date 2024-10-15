#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &v, int temp)
{
    if (v.size() == 0 || v[v.size() - 1] <= temp)
    {
        v.push_back(temp);
        return;
    }
    int last = v[v.size() - 1];
    v.pop_back();
    insert(v, temp);
    v.push_back(last);
    return ;
}

void sorting(vector<int> &v)
{
    if (v.size() == 1)
    {
        return;
    }
    int temp = v[v.size() - 1];
    v.pop_back();
    sorting(v);
    insert(v, temp);
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for(auto i : arr){
        cout<<i << " ";
    }
    sorting(arr);
    for(auto i : arr){
        cout<<i << " ";
    }
}