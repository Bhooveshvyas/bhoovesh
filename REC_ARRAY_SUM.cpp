// #include<bits/stdc++.h>
// using namespace std;

// int arr_sum(int arr[], int n){
//     if(n==1) return arr[0];
//     return arr[n-1] + arr_sum(arr,n-1);
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout<<"SUM = "<<arr_sum(arr,n);
// }
#include<bits/stdc++.h>
using namespace std;
int arr_sum(int arr[],int n){
    if(n==0){
        return arr[0];
    }
    return arr[n] + arr_sum(arr,n-1);
}
int main()
{

    int n;
    cin >> n;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<arr_sum(arr,n-1);
}