#include<bits/stdc++.h>
using namespace std;


// int right(int arr[],int target,int n){
//     int s=0,e=n-1,index=-1,mid,z=-1;
//     while(s<=e){
//         mid=s+(e-s)/2;
//         if(arr[mid]==target){
//             z=mid;
//             s=mid+1;
//         }else if(arr[mid]<target){
//             s=mid+1;
//         }else e=mid-1;
//     }
//     return z;
// } 

// int left(int arr[],int target,int n){
//     int s=0,index,z=-1,e=n-1,mid;
//     while(s<=e){
//         mid = s + ( e - s)/2;
//         if(arr[mid] == target){
//             z=mid;
//             e=mid-1;
//         }else if(arr[mid]<target){
//             s=mid+1;
//         }else e=mid-1;
//     }
//     return z;
// }



int main(){
    vector<char> letter = {'c','f','j'};
    char target = 'j';
    cout<<solve(letter,target);
    // int n;cin >> n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin >> arr[i];
    // }
    // int t;cin >> t;
    // int s=0,e=9,mid;
    // int l = left(arr,t,n),r=right(arr,t,n);
    // cout<<r-l+1<<endl;
}