#include<bits/stdc++.h>
using namespace std;

void rotate_a(int a[],int strt_index,int end_index){
    for(int i=strt_index,j=end_index;i<j;i++,j--){
        swap(a[i],a[j]);
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    cout<<endl;
    rotate_a(a,0,n-1);
    rotate_a(a,1,n-1);
    for(int i=0;i<n;i++){
        cout << a[i] <<" ";
    }
}