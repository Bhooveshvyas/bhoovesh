#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<int> v)
{
    cout << " SIZE = " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << " " << v[i];
    }
    // v.size()->O(1);
    cout << endl;
}

void print_vector_with_addresses(vector<int> &v)
{
    cout << " SIZE = " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << " " << v[i];
    }
    // v.size()->O(1);
    v.push_back(990000);
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        v.push_back(c); // time cimplexity of v.push_back()O(1)
        print_vector(v);
    }
    cout << "     VECTOR - 2" << endl;
    vector<int> v2(4);
    // push_back adds element to the last of a vector.
    // you need to identify th enumber ot be added
    v2.push_back(69);
    print_vector(v2);
    // pop_back removes element from the last of a vector.
    // no need to identify the number you have to remove.
    v2.pop_back(); // O(1)
    print_vector(v2);
    v2.push_back(69);

    cout << endl;

    cout << "     vector - 3" << endl;
    // 2 vectors can be equal (mtlb hum log ek naya vector declare karke bana skte hai)with deep copy.
    vector<int> v3 = v2;
    print_vector(v3);
    v3.push_back(999);
    print_vector(v3);
    print_vector(v2);

    cout << "     vector - 4" << endl;

    // 2 vectors can be equal (mtlb hum log ek naya vector declare karke bana skte hai) with copy of addresses(mtlb agr pehla change hua to dusre m bi frkh pdega).
    vector<int> &v4 = v2;
    // ab cheeze address ke sath pass hongi mtlb v2 m hrkt hui to uska asar v4 m bi dikhega.
    print_vector_with_addresses(v4);
    v4.push_back(999);
    print_vector_with_addresses(v4);
    print_vector_with_addresses(v2);
}