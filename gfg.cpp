#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

vector<vector<int>> ans;

void solve(int i, vector<string> &v, string s)
{
    if (i = s.length())
    {
        v.push_back(s);
    }
}

void maxVal(vector<int> &arr)
{
    int mini = INT_MAX, maxidx = -1, maxi = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (maxi < arr[i])
        {
            maxi = max(arr[i] - i, maxi);
            maxidx = i;
        }
    }
    int x = -1;
    for (int i = 0; i < n; i++)
    {
        if (mini > arr[i] && i != maxidx)
            mini = min(mini, arr[i] - i), x = i;
    }
    cout << maxi << " " << maxidx << endl;
    cout << mini << " " << x << endl;
    return;
}
void maximizeArray(int arr1[], int arr2[], int n)
{
    vector<int> ans;
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr2[i]);
    for (int i = 0; i < n; i++)
        s.insert(arr1[i]);
    set<pair<int, int>> s2;
    int k = 0;
    for (auto &i : s)
        s2.insert({i, k++});
    vector<pair<int, int>> temp;
    for (auto &i : s2)
    {
        temp.push_back({i.first, i.second});
    }
    sort(temp.begin(),temp.end(),[](pair<int,int>&p1,pair<int,int>&p2){
        return p1.first>p2.first;
    });
    for(auto&i:temp)cout<<i.first<<" "<<i.second<<endl;
}

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    maximizeArray(a, b, n);
}