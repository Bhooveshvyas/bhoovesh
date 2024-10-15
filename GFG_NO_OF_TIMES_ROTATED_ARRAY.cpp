#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> arr){
    int s=0,e=arr.size()-1,mid,n=arr.size();
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]<=arr[(mid-1+n)%n]&&(arr[mid]<=arr[(mid+1)%n])){
            return mid;
        }
        else if(arr[e]>=arr[mid]){
            e=mid-1;
        }
        else if(arr[s]<=arr[mid]){
            s=mid+1;
        }
    }
}

int main(){
    int n;cin >> n;
    int a[n];
    a[0]=0;
    cout<<sizeof(a)/sizeof(a[0]);
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    cout<<solve(v);
}
// }24800 24941 25652 25685 25760 26316 26741 26994 27482 27977 28337 28380 28784 29005 29005 29084 29391 29444 29635 29861 29996 30262 30278 30454 30752 30928 31093 31263 31958 79 110