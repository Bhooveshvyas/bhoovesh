#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ALL THE BELOW BUILT-IN FUNCTIONS ARE WORKING WITH OMPLEXITIES OF O(N);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // FINDING MINIMUM ELEMENT IN A VECTOR->
    int min = *min_element(v.begin(), v.end());
    cout << "MIN ELEMENT -> " << min << endl;  
    // FINDING MAXIMUM ELEMENT IN A VECTOR->
    int max = *max_element(v.begin(), v.end());
    cout << "MAX ELEMENT -> " << max << endl;
    // FINDING SUM OF A PARTICULAR SEQUENCE OR IN A RANGE OF INDICES IN A GIVEN VECTOR.
    int sum = accumulate(v.begin(), v.end(), 0); // qaYE JO LAST WALA ZERO HAI IT IS THE INITIAL VALUE OF SUM
    cout << "SUM -> " << sum << endl;
    // TO FIND THE COUNT OF AN ELEMENT IN A VECTOR .
    int ct = count(v.begin(), v.end(), 5);
    cout << "COUNT -> " << ct << endl;
    // TO FIND THE POSITION OF AN ELEMENT IN A VECTOR.
    int element = *find(v.begin(), v.end(), 5);
    cout << "AT -> " << element << endl;
    // TO REVERSE A VECTOR for paricular indices in this case reverseing from v.begin() to v.end()
    reverse(v.begin(), v.end());
    for (auto value : v)
        cout << value << " ";
    cout << endl;
}