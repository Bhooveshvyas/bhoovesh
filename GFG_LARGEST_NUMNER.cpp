#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if(n%10==n)return n;
    for(int num = n ; num >= 1;num--){
        string s;
        for (int k = num; k > 0; k /= 10)
        {
            int j = k % 10;
            s.push_back(j+'0');
        }
        bool f = true;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]<s[i+1]){f=false;break;}
        }
        if(f){
            return num;
        }
    }    
}

int main()
{
    int n;
    cin >> n;
    cout<<solve(n);
}