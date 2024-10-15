#include <bits/stdc++.h>
using namespace std;
#define bhoovesh \
	int t;       \
	cin >> t;    \
	while (t--)

#define oneton(i, n) for (int i = 0; i < n; i++)
#define ntoone(i, n) for (int i = n - 1; i >= 0; i--)
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define p(x) cout << x << endl;
#define M 1000000007

typedef long long ll;
typedef vector<pair<long long, long long>> vpll;
typedef vector<int> vint;
typedef vector<string> vstr;
typedef vector<long long> vll;
typedef vector<pair<int, int>> vpair;

template <typename T> // cin vectorv(n);
istream &operator>>(istream &in, vector<T> &v)
{
	for (auto &it : v)
		in >> it;
	return in;
}
template <typename T> // cin vectorv(n);
ostream &operator<<(ostream &out, const vector<T> &c)
{
	for (auto &it : c)
		out << it << " ";
	return out;
}

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
	if (p1.first != p2.first)
		return p2.first > p1.first;
	return p2.second < p1.second;
}

ll power(ll n, ll m, ll k)
{
	if (k == 0)
		return 1;
	else if (k == 1)
		return n;
	else if (k % 2)
		return (n * power((n * n) % m, m, k / 2)) % m;
	else
		return power((n * n) % m, m, k / 2);
}
int mod = 998244353;

ll fact(int n)
{
	if (n == 0)
		return 1;
	return (n * (fact(n - 1)) % mod) % mod;
}

string bin(int n)
{
	int i = 0;
	string s;
	for (int i = 31; i >= 0; i--)
	{
		if (n & (1 << i))
			s += '1';
		else
			s += '0';
	}
	return s;
}

int dec(string s)
{
	reverse(s.begin(), s.end());
	int i = 0;
	int num = 0;
	while (i < s.length())
	{
		num += (s[i] - '0') * (1 << i);
		i++;
	}
	return num;
}
// int sieve[1000002];
vector<int> primes;
vector<int> sieve(100103, 0);
void generateSieve(int n)
{
	// memset(sieve, 0, sizeof(sieve));
	sieve[0] = sieve[1] = 1;
	for (int i = 2; i * i <= n; i++)
	{
		if (sieve[i] == 0)
		{
			for (int j = i * i; j <= n; j += i)
			{
				sieve[j] = 1;
			}
		}
	}
	for (int i = 2; i <= n; i++)
		if (sieve[i] == 0)
			primes.pb(i);
}

bool isPrime(int n)
{
	return sieve[n] == 0;
}


bool isValid(int k,int h,vector<int>&v){
	ll sum=0;
	for(int i=0;i<v.size();i++){
		if(v[i]>h)continue;
		sum += (h-v[i]);
	}
	return sum <= k;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	bhoovesh
	{
		int n, k;
		cin >> n >> k;
		vint v(n);
		cin >> v;
		int start = 0,end=2e9;
		int ans=0;
		while(start<end){
			int mid = start + (end- start)/2;
			if(isValid(k,mid,v)){
				ans=mid;
				start=mid+1;
			}
			else{
				end=mid-1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}