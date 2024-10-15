#include <bits/stdc++.h>
  using namespace std;
  int ans(vector<int> k, int n){
      int count = 0;
      int maxi = *max_element(k.begin(), k.end());
      for(int i = 0; i < k.size(); i++){
          count += (2 * k[i] - 1);
      }
      int ans = count - (2*maxi - 1);
      return ans;
  }
  int main(){
      int t;
      cin>>t;
      while(t--){
          int n,k;
          cin>>n>>k;
          vector<int> v(k);
          for(int i = 0; i < k; i++){
              cin>>v[i];
          }
          cout<<ans(v, n)<<endl;
      }
      return 0;
  }