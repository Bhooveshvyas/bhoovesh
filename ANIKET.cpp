// NiT@4$in
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    //CAPITAL TO LOWER
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    cout<<"BEFORE REMOVING -> ";
    for(int i=0;str[i]!='\0';i++)
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=33 && str[i]<=47){
                str.erase(remove(str.begin(), str.end(), str[i]), str.end());
                --i;
        }
        if(str[i]>=58 && str[i]<=64)
        {
                str.erase(remove(str.begin(), str.end(), str[i]), str.end());
                --i;
        }
        if(str[i]>=91 && str[i]<=96)
        {
                str.erase(remove(str.begin(), str.end(), str[i]), str.end());
                --i;
        }
    for (int i = 0; i<=str.length(); i++)
    {
        cout<<str[i];
    }
    cout<<endl;
    }
}
