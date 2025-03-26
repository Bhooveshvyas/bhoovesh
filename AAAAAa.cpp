#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> b(n);
		vector<int> a(n);
		for (auto &i : a)
			cin >> i;
		for (auto &i : b)
			cin >> i;
		if (n == 3)
		{
			cout << "NO" << endl;
			continue;
		}
		unordered_map<int, int> m1;
		unordered_map<int, int> m2;
		for (auto &i : a)
			m1[i]++;
		for (auto &i : b)
			m2[i]++;
		int ct1 = 0;
		int ct2 = 0;
		for (auto &i : m1)
			ct1++;
		for (auto &i : m2)
			ct2++;
		if (ct1 == 1)
		{
			if (ct2 >= 3)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
			continue;
		}
		if (ct2 == 1)
		{
			if (ct1 >= 3)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
	}
}
