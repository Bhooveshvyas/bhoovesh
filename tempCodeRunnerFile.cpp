
ll solve(vector<vector<ll>> &v, ll i, ll j, ll m, ll n)
{
	if (m == 0 && n == 0)
		return v[0][0];
	ll ans = 0;
	int sei = i, sej = j, swi = i, swj = j;
	int nei = i, nej = j, nwi = i, nwj = j;
	while (sei < m && sej < n)
	{
		ans += v[sei++][sej++];
	}
	while (swi < m && swj >= 0)
	{
		ans += v[swi++][swj--];
	}
	while (nei >= 0 && nej < n)
	{
		ans += v[nei--][nej++];
	}
	while (nei >= 0 && nej >= 0)
	{
		ans += v[nei--][nej--];
	}
	return ans;
}

int main()
{
	bhoovesh
	{
		ll m, n;
		cin >> m >> n;
		vector<vector<ll>> v(m, vector<ll>(n));
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
				cin >> v[i][j];
		}
		long long ans = 0;
		for (ll i = 0; i < m; i++)
		{
			for (ll j = 0; j < n; j++)
			{
				ans = max(ans, solve(v, i, j, m, n));
			}
		}
		cout << ans << endl;
	}
	return 0;
}