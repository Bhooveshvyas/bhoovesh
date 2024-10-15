#include <vector>
#include <algorithm>
#include <iostream>

int maxTotalReward(std::vector<int>& rewardValues) {
    std::sort(rewardValues.begin(), rewardValues.end());

    int n = rewardValues.size();
    std::vector<int> dp(n, 0);
    int maxReward = 0;
    
    for (int i = 0; i < n; ++i) {
        if (rewardValues[i] > maxReward) {
            maxReward += rewardValues[i];
        }
    }
    
    return maxReward;
}

int main() {
    std::vector<int> rewardValues1 = {1, 1, 3, 3};
    std::vector<int> rewardValues2 = {1, 6, 4, 3, 2};

    std::cout << "Max Total Reward for [1, 1, 3, 3]: " << maxTotalReward(rewardValues1) << std::endl;
    std::cout << "Max Total Reward for [1, 6, 4, 3, 2]: " << maxTotalReward(rewardValues2) << std::endl;

    return 0;
}


// #include <vector>
// #include <algorithm>
// #include <iostream>

// int maxTotalReward(std::vector<int>& rewardValues) {
//     int n = rewardValues.size();
//     int maxValue = *std::max_element(rewardValues.begin(), rewardValues.end());

//     // Create a DP array to store the maximum reward for each reward value
//     std::vector<int> dp(maxValue + 1, 0);

//     // Iterate through each reward value in the input array
//     for (int reward : rewardValues) {
//         // Traverse the DP array from the back to the front
//         for (int i = maxValue; i >= reward; --i) {
//             if (dp[i - reward] != 0 || i == reward) {
//                 dp[i] = std::max(dp[i], dp[i - reward] + reward);
//             }
//         }
//     }

//     // Find the maximum reward possible
//     int maxReward = 0;
//     for (int i = 1; i <= maxValue; ++i) {
//         maxReward = std::max(maxReward, dp[i]);
//     }

//     return maxReward;
// }

// int main() {
//     std::vector<int> rewardValues1 = {1, 1, 3, 3};
//     std::vector<int> rewardValues2 = {1, 6, 4, 3, 2};

//     std::cout << "Max Total Reward for [1, 1, 3, 3]: " << maxTotalReward(rewardValues1) << std::endl;
//     std::cout << "Max Total Reward for [1, 6, 4, 3, 2]: " << maxTotalReward(rewardValues2) << std::endl;

//     return 0;
// }
