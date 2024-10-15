#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &stck, int last)
{
    if (stck.size() == 0)
    {
        stck.push(last);
        return;
    }
    int top = stck.top();
    stck.pop();
    insert(stck, last);
    stck.push(top);
    return;
}

void reverse(stack<int> &stck)
{
    if (stck.size() == 1)
    {
        return;
    }
    int last = stck.top();
    stck.pop();
    reverse(stck);
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
        int x;
        cin >> x;
        stck.push(x);
    }
    //     reverse(stck);
    while (!stck.empty())
    {
        cout << stck.top() << endl;
        stck.pop();
    }
}
/*
 4 -> 4     4->1
      3        2
      2        3
      1        4
*/