#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    unordered_map<int, int> remainder_map;  // Stores the first occurrence of each remainder
    long long prefix_sum = 0;
    int max_length = 0;

    // Initialize the remainder_map with remainder 0 at index -1
    remainder_map[0] = -1;

    for (int i = 0; i < n; ++i) {
        prefix_sum += arr[i];
        int remainder = prefix_sum % x;
        if (remainder < 0) {
            remainder += x;  // Normalize negative remainders
        }

        // Check if this remainder has been seen before
        if (remainder_map.find(remainder) != remainder_map.end()) {
            // Calculate the length of the subarray
            int length = i - remainder_map[remainder];
            max_length = max(max_length, length);
        } else {
            // Store the first occurrence of this remainder
            remainder_map[remainder] = i;
        }
    }

    // Output the length of the largest subarray with a sum not divisible by x
    cout << max_length << endl;
    return 0;
}
0.