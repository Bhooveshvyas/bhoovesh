#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    
    int findCiel(vector<long long>& v,long long n,long long x){
        if(x<v[0])return 0;
        auto it = upper_bound(v.begin(),v.end(),x);
        if(it==v.begin())return (*it==x) ? 0 : -1;
        if(it!=v.end() && *it==x)return distance(v.begin(),it);
        else return distance(v.begin(),it);
    }

    int findFloor(vector<long long>& v, long long n, long long x) {
        if(x>v[n-1] || x<v[0])return -1;
        auto it = lower_bound(v.begin(),v.end(),x);
        if(it==v.begin()) return *it==x ? 0 : -1;
        if(it!=v.end() && *it==x)return distance(v.begin(),it);
        else return distance(v.begin(),it)-1;
    }
};

int main(){
    long long n;cin >> n;
    vector<long long> v(n);
    for(long long i=0;i<n;i++)cin >> v[i];
    int x;cin >> x;
    Solution obj;
    cout<<"FLOOR = "<<obj.findFloor(v,n,x)<<endl;
    cout<<"CIEL = "<<obj.findCiel(v,n,x);
}