#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j,k;
        k=0;
        vector<int>  c(n+m);
        nums1.erase(remove(nums1.begin(),nums1.end(),0),nums1.end());
        nums2.erase(remove(nums2.begin(),nums2.end(),0),nums2.end());
        while(i<m&&j<n){
            if(nums1[i]<nums2[j] && nums1[i]!=0)c[k++]=nums1[i++];
            else c[k++]=nums2[j++];
        }
        for(;i<m;i++)c[k++]=nums1[i++];
        for(;j<n;j++)c[k++]=nums1[j++];
        return c;
    }

int main(){
    int m,n;cin >> n>>m;
    vector<int> v(n);
    for(auto i : v){
        cin >> i;
    }
    vector<int> v2(m);
    for(auto i : v2)cin >> i;
    for(auto i : merge(v,n,v2,m))cout<<i<<" ";

}