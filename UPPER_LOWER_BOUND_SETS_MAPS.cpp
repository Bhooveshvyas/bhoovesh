#include <bits/stdc++.h> //INTERNAL IMPLIMENTATION IN CASE OF SETES AND MAPS AND ARRAYS IS TREES
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    auto it = lower_bound(s.begin(), s.end(), 5); // 🔴YE WALI LINE O(N) LEGI ESPECIALLY FOR SET MAP
    auto it2 = s.lower_bound(5);                  // THIS LINE WILL TAKE O(LOG(N))
}