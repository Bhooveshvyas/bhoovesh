#include <bits/stdc++.h>
using namespace std;
vector<int> v;
struct compare {
        bool operator()(pair<int, int>& a, pair<int, int>& b) {
            if (a.second == b.second) {
                return a.first < b.first;
            }
            return a.second > b.second;
        }
    };

    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, compare> minheap;

        int i = 0, j = 0;
        vector<int> ans;
        while (j < n) {
            map<int, int> m;
            for(int h=i;h<=j;h++)m[nums[h]]++;
            minheap.push({nums[j], m[nums[j]]});
            int size = j - i + 1;
            if (size < k)
                j++;
            else if (size == k) {
                int y = x;
                int sum = 0;
                priority_queue<pair<int, int>, vector<pair<int, int>>, compare>
                minheap1=minheap;
                while (y-- && !minheap1.empty()) {
                        sum += minheap1.top().first * minheap1.top().second ;
                        minheap1.pop();
                    }
                ans.push_back(sum);
                m[nums[i]]--;
                i++;
                j++;
                }
            }
        return ans;
    }
int main()
{
    int n;
    cin >> n;
    int k;cin >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> ans=findXSum(v,n,k);
    for(auto&i:ans)cout<<i<<" ";
}

//      a
//   aa    aa
//  aaa    aaaa
//  aaaa    aaaaa