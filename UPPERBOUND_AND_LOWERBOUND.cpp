#include <bits/stdc++.h>//INTERNAL IMPLIMENTATION IN CASE OF VECTORS AND ARRAYS IS BINARY SEARCH
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    // FOR THE CONDITION OF THESE UPPER BOUND AND LOWER BOUND ARRAYS OR VECTORS MUST BE SORTED THEN ONLY IT WILL BE APPLICABLE.
    // IF NOT SORTED THEN O(N) IF SORTED THEN O(LOG(N)) THAT'S WHY THE THING IS TO SORT.
    // UPPERBOUND = JIS NUMBER KA UPPER BOUND NIKAL RHE HO USKA JUST AGLA NUMBER NIKALKR DEGA IF PRESENT OR NOT.
    // LOWERBOUND = IF PRESENT THEN WOHI NUMBER NIKALKR DEGA((AGR REPEAT HORHA HAI TOH SABSE AGE WALA DEGA) IF NOT THEN JUST BADA NUMBER RETURN KREGA.
    // exceptional case for upper bound is that ki second last number dediya ya fr lower bound m esa number diya joki exist hi nahi krta array m and sabse bade number se bi bada h to us case m wo sabse last wale element ke just bad wale ka point dedega .
    // ye dono function location return krte h i.e. for arrays pointer retuen krega and for vector iterator return krega
    auto ptr = lower_bound(arr.begin(), arr.end(), 5);
    cout << "LOWER BOUND = " << endl;
    if (ptr != arr.end())
        cout << *ptr << endl;
    else
        cout << "NOT FOUND" << endl;
    auto ptr2 = upper_bound(arr.begin(), arr.end(), 5);
    cout << "UPPER BOUND = " << endl;
    if(ptr2!=arr.end()) cout<<*ptr2<<endl;
    else    cout<<"NOT FOUND";
}
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr + n);
//     // FOR THE CONDITION OF THESE UPPER BOUND AND LOWER BOUND ARRAYS OR VECTORS MUST BE SORTED THEN ONLY IT WILL BE APPLICABLE.
//     // IF NOT SORTED THEN O(N) IF SORTED THEN O(LOG(N)) THAT'S WHY THE THING IS TO SORT.
//     // UPPERBOUND = JIS NUMBER KA UPPER BOUND NIKAL RHE HO USKA JUST AGLA NUMBER NIKALKR DEGA IF PRESENT OR NOT.
//     // LOWERBOUND = IF PRESENT THEN WOHI NUMBER NIKALKR DEGA((AGR REPEAT HORHA HAI TOH SABSE AGE WALA DEGA) IF NOT THEN JUST BADA NUMBER RETURN KREGA.
//     // exceptional case for upper bound is that ki second last number dediya ya fr lower bound m esa number diya joki exist hi nahi krta array m and sabse bade number se bi bada h to us case m wo sabse last wale element ke just bad wale ka point dedega .
//     // ye dono function location return krte h i.e. for arrays pointer retuen krega and for vector iterator return krega
//     int *ptr = lower_bound(arr, arr + n, 5);
//     cout << "LOWER BOUND = " << endl;
//     if (ptr != arr + n)
//         cout << *ptr << endl;
//     else
//         cout << "NOT FOUND" << endl;
//     int *ptr2 = upper_bound(arr, arr + n, 5);
//     cout << "UPPER BOUND = " << endl;
//     if(ptr2!=arr+n) cout<<*ptr2<<endl;
//     else    cout<<"NOT FOUND";
// }