#include <bits/stdc++.h>
using namespace std;
int solve(int n){
        vector<int> v(32);
        for(int m=31;m>=0;m--){
            v[m]=(n & (1<<m));
        }
}
void unset(int n,int bit){
    for(int i=31;i>0;i--){

    }
}
vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                ans[i]=-1;
            }
            else{
                int bit = solve(v[i]);
                unset(v[i],bit);
            }
        }
        return ans;
}
int main()
{
    int n;
    cin >> n;
    for(int i=31;i>=0;i--){
        cout<<n&(1<<i)<<" ";
    }
    // int t;
    // cin >> t;
// vector<int> v;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout<<minBit
}

//      a
//   aa    aa
//  aaa    aaaa
//  aaaa    aaaaa