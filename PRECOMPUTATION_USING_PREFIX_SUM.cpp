// GIVEN AN ARRAY OF N INTEGERS .GIVEN Q QUERIES IN EACH QUERY .
// THERE GIVEN 2 INDICES L AND R PRINT THE SUM FROM L UPTO R.
/*
CONSTRAINTS -> 
1<=N<=10^5
1<=A[i]<=10^9
1<=Q<=10^5
1<=L,R<=N
*/




#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
long long int hsh[N];

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=1;i<=n;++i){
        cin >> a[i];
        hsh[i] = hsh[i-1] + a[i];
    }
    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        cout<<hsh[r]-hsh[l-1]<<endl;
    }
}




// BRUTE FORCE 
// #include<bits/stdc++.h>
// using namespace std;

// const int N = 1e5+10;
// int a[N];

// int main(){
//     int n;
//     cin >> n;
//     for(int i=1;i<=n;i++){
//         cin >> a[i];
//     }
//     int t;
//     cin >> t;
//     while(t--){
//         int l,r;
//         cin >> l >> r;
//         long long int sum=0;
//         for(int i=l;i<=r;i++){
//             sum+=a[i];
//         }
//         cout<<sum;
//     }    
// }