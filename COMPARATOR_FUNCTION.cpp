#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b)
{   if(a.first!=b.first)
        return a < b;
    else
        return a < b; 
}

int main()
{
    int n; 
    cin >> n;
    vector<pair<int,int> > v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (should_i_swap(v[i],v[j]))
    //         {
    //             swap(v[i], v[j]);
    //         }
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " "<< v[i].second<<endl;
    }
}