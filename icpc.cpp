#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &i : v) cin >> i;

        sort(v.begin(), v.end());

        // Use two-pointer technique to maximize the sum
        int left = 0, right = n - 1;
        while (left < right) {
            if (min(v[left], v[right]) > k) {
                // Both values are above k, so we can reduce both by 1
                v[left]--;
                v[right]--;
            } else if(v[left]<=k){
                // Move the left pointer if it's within the bound
                left++;
            }else right;
        }
        for(auto&I:v)cout<<I<<" ";
        cout<<endl;

        // Calculate the sum of the final array
        long long sum = accumulate(v.begin(), v.end(), 0LL);
        cout << sum << endl;
    }
    return 0;
}