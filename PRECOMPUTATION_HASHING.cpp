// HASHING IS NOTHING BUT TUMKO BAS EK PARTICULAR QUESTION KE LIYE EK ARRAY YA FIR EK ALAG SE PARTICULAR SOLUTION SPACE BANANI HAI BAS
/*
PRINT THE NUMBER OF COUNT IN ARRAY

CONSTRAINTS ->
1<=N<=10^5                                         <<<<<-----
1<=A[i]<=10^5                                                 \
1<=T<=10^5                                                     \
                                                                \
                                                                 \
                                                                  \
*//////                                                            \  
// 😱HAHSING TAB HI LAGEGI JAB ELEMENTS OF ARRAY ARE LESS THAN <=10^7
 
// TIME COMPLEXITY = O(N);
#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
int hsh[N];

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        hsh[a[i]]++;
    }
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        cout<<hsh[x]<<endl;
    }
}



// WIHTOUT HASHING -> BRUTE FORCE
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;        
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin >>a[i];
//     }
//     int t;
//     cin >> t;
//      while(t--){
//         int x;
//         cin >> x;

//         int count=0;

//         for(int i=0;i<x;i++){
//             if(a[i]==x){
//                 count++;
//             }
//         }
//         cout<<count<<endl;
//      }
// }