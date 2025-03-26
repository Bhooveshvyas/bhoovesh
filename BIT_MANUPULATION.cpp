#include <bits/stdc++.h>
using namespace std;

void printBinary(int n)
{
    cout << "YEH PRINT KAR RHA HAI 10->0"<<endl;
    for (int i = 10; i >= 0; --i)
    {
        cout <<i<<"th -> "<< ((n >> i) & 1)<<" ";
    }
    cout << endl;

}

int main()
{
    int n;
    cin >> n;
    printBinary(n);

    // checking parity  ....!!!
    if (n & 1)
        cout << "ODD" << endl;
    else
        cout << "EVEN" << endl;

    int bit = 3;        
    // checking whether the bit is set or not
    if (n & (1 << 3))
    {
        cout << "3rd BIT IS A SET BIT" << endl;
    }
    else
        cout << "3rd BIT IS NOT A SET BIT" << endl;

    // setting the i'th bit
    int i = 2;
    cout<<"SETTING"<<endl;
    printBinary(n | (1 << i));

    // resetting the j'th bit
    int j = 1;
    cout<<"RESETTING"<<endl;
    printBinary(n & ~(1 << j));

    // toggling the l'th bit
    int l = 0;
    cout<<"TOGGLE"<<endl;
    printBinary(n ^ (1<<l));

    // counting the number of set bits
    int ct=0;
    for(int m=31;m>=0;m--){
        if(n & (1<<m))ct++;
    }cout<<"NUMBER OF SET BITS = "<<ct<<endl;
}