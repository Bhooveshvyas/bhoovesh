#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int n = v.size();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    vector<int>::iterator it = v.begin();
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << (*(it + i)) << " ";
    }
    cout << endl;
    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    vector<pair<int, int>> v_p = {{1, 2}, {2, 4}, {45, 6}};
    vector<pair<int, int>>::iterator i_t;
    for (i_t = v_p.begin(); i_t != v_p.end(); ++i_t)
    {
        cout << (*i_t).first << " " << (*i_t).second << endl;
    }
    for(i_t = v_p.begin();i_t != v_p.end();++i_t){
        cout<<(i_t->first)<<(i_t->second)<<" ";
    }
}