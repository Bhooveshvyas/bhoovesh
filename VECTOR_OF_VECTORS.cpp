



#include<bits/stdc++.h>
using namespace std;

void printvector(vector<int> v){
    cout<<"SIZE = "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int N;
    cin >> N;
    vector<vector<int>> v;
    for(int i=0;i<N;i++){
        int n;
        cin >> n;
        vector<int> temp;
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    //IF YOU WANT TO NOT USE TEMP.DO THIS,
    /*for(int i=0;i<N;i++){
        int n;
        cin >> n;
        v.push_back(vector<int> ());
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }*/
    for(int i=0;i<N;i++){
        printvector(v[i]);
    }
}




















// #include<bits/stdc++.h>
// using namespace std;

// void printvector(vector<int> v){
//     cout<<"SIZE = "<<v.size()<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int N;
//     cin >> N;
//     vector<int> v[N];
//     for(int i=0;i<N;i++){
//         int n;
//         cin >> n;
//         for(int j=0;j<n;j++){
//             int x;
//             cin >>x;
//             v[i].push_back(x);
//         }
//     }
//     for(int i=0;i<N;i++){
//         printvector(v[i]);
//     }
//     // cout<<endl<<v[3][3]a;
// }