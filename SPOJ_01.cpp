#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+10;
long long m;
int n;
long long trees[N];

bool isSufficient(int h){
    long long wood =0;
    for(int i=0;i<n;i++){
        if(trees[i] >= h){
            wood += trees[i]-h;
        }
    }
    return wood >= m;
}

int main()
{
        cin >> n >> m ;
        for(int i=0;i<n;i++)cin>>trees[i];
        long long low = 0, high = 1e9,mid;
        int ans=-1;
        while(low<=high){
            mid=low+(-low+high)/2;
            if(isSufficient(mid)){
                ans=mid;
                low=mid+1;
            }else{
                high = mid-1;
            }
        }
        cout<<ans<<endl;
}