#include <bits/stdc++.h>
using namespace std;
// ALL OF THE THREE ARE BOOLEAN TYPE OF FUNCTIONS.
// ALL OF = AND(ALL OF THE ELEMENT MUST HOLD THE CONDITION)
// ANY OF = OR(ANY OF THE ELEMENT MUST HOLD THE CONDITION)
// NONE OF = (NONE OF THE  ELEMENT MUST HOLD ANY CONDITION)
int main()
{
    vector<int> v = {2, 4, 10};
    cout << all_of(v.begin(), v.end(), [](int x)
                   { return x > 0; });
    cout << any_of(v.begin(), v.end(), [](int x)
                   { return x > 0; });
    cout << none_of(v.begin(), v.end(), [](int x)
                    { return x < 0; });
    cout<<"\nCHECKING  EVEN \n";
    cout<<all_of(v.begin(),v.end(),[](int x){return x%2==0;});
    cout<<any_of(v.begin(),v.end(),[](int x){return x%2==0;});
    cout<<none_of(v.begin(),v.end(),[](int x){return x%2!=0;});
}