#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;cin >> n;
    int s1=1,e=10,mid,guess;
    while(true){
        mid = (s1+e)/2;
            cout<<"IS YOUR NUMBER GREATER THAN EQUAL TO OR LESS THAN "<<mid<<endl;
            cin >> s;
            if(s=="equal"){
                cout<<"CONGO YOUR NUMBER IS "<<mid<<endl;
                break;
            }else if(s=="greater"){
                s=mid+1;
            }else {
                e=mid-1;
            }
    }
    return 0;
}