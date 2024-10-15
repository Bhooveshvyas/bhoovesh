#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &stck, int last)
{
    if (stck.size() == 0 || stck.top() >= last)
    {
        stck.push(last);
        return;
    }
    int last_element = stck.top();
    stck.pop();
    insert(stck, last);
    stck.push(last_element);
    return;
}

void sorting(stack<int> &stck)
{
    if (stck.size() == 1)
    {
        return;
    }
    int last = stck.top();
    stck.pop();
    sorting(stck);
    insert(stck, last);
    return;
}

int main()
{
    int n;
    cin >> n;
    stack<int> stck;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        stck.push(c);
    }
    sorting(stck);
    while (!stck.empty())
    {
        cout << stck.top() << " ";
        stck.pop();
    }
}