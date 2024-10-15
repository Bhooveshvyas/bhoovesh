#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> sieve;
    for(int i=1;i<n;i++){
        sieve[i]=1;
    }
    for(int i=2;i*i<n;i++){
        if(sieve[i]==1){
            for(int j=i*i;j<n;j+=i){
                sieve[i]=0;
            }
        }
    }
}