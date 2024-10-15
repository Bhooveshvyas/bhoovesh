#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v(nums.size()+1,0);
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==2)ans.push_back(i);
        }
        return ans;
    }

int main(){
    int n;cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    } 
    for(auto i : findDuplicates(v))cout<<i<<" ";

}