#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int s=0,e=nums.size()-1,mid;
    if(nums.size()==1)return nums[0];
    if(nums[0]!=nums[1])return nums[0];
    if(nums[e]!=nums[e-1])return nums[e];
    while(s<=e){        
        mid=s+(e-s)/2;
        if(((1<mid-1 && nums.size()>mid) && nums[mid]!=nums[mid+1]&&nums[mid]!=nums[mid-1])){
            return nums[mid];
        }
        if(mid%2==0){
            if((nums[mid]==nums[mid+1]))s=mid+2;
            else e=mid-1;
        }
        else{
            if(nums[mid]==nums[mid-1])s=mid+1;
            else e=mid-2;
        }
    }return nums[s];
}
int main(){
    int n;cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    cout<<singleNonDuplicate(v);
}