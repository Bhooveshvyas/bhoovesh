#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> queryResults(int k, vector<vector<int>> &nums)
    {
        int n = nums.size();
        vector<int> ans;
        unordered_set<int> temp;
        unordered_map<int, int> m1;
        unordered_map<int, int> m2;
        for (int i = 0; i < n; i++)
        {
            int x = nums[i][0];
            int color = nums[i][1];
            if (m1.find(x) != m1.end())
            {
                if (m1[x] != color)
                {
                    m1[x]--;
                    if (m1[x] == 0)
                        temp.erase(m1[x]);
                }
                m2[color]++;
                m1[x] = color;
            }
            else
            {
                m1[x] = color;
                m2[color]++;
            }
            temp.insert(color);
            ans.push_back(temp.size());
        }
        return ans;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> nums(n, vector<int>(2));
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        nums[i][0] = x;
        nums[i][1] = y;
    }
}