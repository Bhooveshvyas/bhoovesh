#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
long long int hsh[N];

int main(){
    hsh[0] = 0;
    hsh[1] = 1;
    int n;
    cin >> n;
    cout<<hsh[0]<<" "<<hsh[1]<<" ";
    for(int i=2;i<n-2;i++){
        hsh[i] = hsh[i-1] + hsh[i-2];
        cout<<hsh[i]<<" ";
    }
}




// FIBONACCI USING BRUTE FORCE
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int a=0;
//     int b=1;
//     int sum;
//     for(int i=1;i<=n;i++){
//         sum = a + b;
//         cout<<sum<<" ";
//         a = b;
//         b = sum;
//     }
// }
// // 0 1 1 2 3 5 8