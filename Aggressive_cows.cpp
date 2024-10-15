#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPossible(vector<ll> &v,ll n,ll k,ll mid){
    ll cows = 1;
    ll stalls = 0;
    for(int i=0;i<n;i++){
        if(stalls+v[i]<=mid)stalls+=v[i];
        else{
            cows++;
            if(cows>k&&v[i]>mid)return false;
            stalls=v[i];
        }
    }return true;
}

int main(){
    int t;cin>>t;
    while(t--){
        ll n,k;cin >> n >> k;
        vector<ll> v(n);
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin >> v[i];
            sum+=v[i];
        }
        ll s=0,e=sum,mid,ans=-1;
        while(s<=e){
            mid=s+(e-s)/2;
            if(isPossible(v,n,k,mid)){
                ans = mid; 
                s=mid+1;
            }else e =mid-1;
        }cout<<ans<<endl;
    }
}