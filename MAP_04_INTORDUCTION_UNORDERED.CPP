/*
UNORDERED MAP PRINTS THE INTEGER IN THE ORDER IN WHICH IT IS GIVEN  NOT NECCESSARILY IN A SORTED MANNER.AND PRINTS STRING IN THE
GIVEN ORDER NOT NECCESSARILY IN LEXIOGRAPHICALL ORDER.
UNORDERED MAP IS MORE EFFECTIVE IN TERMS OF TIME COMPLEXITY OF 1).INPUT=(O(1))
                                                               2).SEARCHING=(O(1))
                                                               3).
*/
#include <bits/stdc++.h>
using namespace std;

void print_unorderedmap(unordered_map<int, string> up)
{
    for (auto i : up)
    {
        cout << i.first << " " << i.second << endl;
    }
}

int main()
{
    unordered_map<int, string> up;
    up[0] = "zero";
    up[1] = "one";
    up[2] = "two";
    up[3] = "three";
    up[4] = "four";
    up[5] = "five";
    auto it = up.find(5); // O(1)
    print_unorderedmap(up);
    if (it != up.end())
        up.erase(it); // O(1)
    else
        cout << "NOT FOUND.";
}