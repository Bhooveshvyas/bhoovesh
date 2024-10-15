#include <bits/stdc++.h>
using namespace std;
int po(int p, int n)
{
    if (p == 0)
        return 1;
    int half = po(p / 2, n);
    return (p % 2) ? half * half * n : half * half;
}

string bin(int n)
{
    if (n == 0)
        return "0";
    return bin(n / 2) + to_string(n % 2);
}



void temp(string s,int n,string op){
    if(n==0){
        
    }
    string s1,s2;

}

int main()
{
    int n;
    cin >> n;
    cout << po(2, 10) << endl;
    cout << bin(n) << endl;
    return 0;
}