#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> m = {{'[', -1}, {'{', -2}, {'(', -3}, {']', 1}, {'}', 2}, {')', 3}};
// we had given negative indices for closed brackets and positive brackets for closed brackets,
// also when we will do the sum operation over them they'll give 0 so by applying this condition,
// we can find whether pranthesis are balanced or not.
string isBalanced(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (m[c] < 0)
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                return "NO";
            }
            else
            {
                char top = st.top();
                st.pop();
                if (m[c] + m[top] != 0)
                {
                    return "NO";
                }
            }
        }
    }
    if (st.empty())
        return "YES";
    return "NO";
}

int main()
{
    int _;
    cin >> _;
    while (_--)
    {
        string s;
        cin >> s;
        cout << isBalanced(s);
    }
}