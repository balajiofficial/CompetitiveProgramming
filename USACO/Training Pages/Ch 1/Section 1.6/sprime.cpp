/*
ID: balajik2
TASK: sprime
LANG: C++14
*/
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ofstream cout ("sprime.out");
	ifstream cin ("sprime.in");
	vector<vector<int>> a = {{2, 3, 5, 7},{23, 29, 31, 37, 53, 59, 71, 73, 79},{233, 239, 293, 311, 313, 317, 373, 379, 593, 599, 719, 733, 739, 797},{2333, 2339, 2393, 2399, 2939, 3119, 3137, 3733, 3739, 3793, 3797, 5939, 7193, 7331, 7333, 7393},{23333, 23339, 23399, 23993, 29399, 31193, 31379, 37337, 37339, 37397, 59393, 59399, 71933, 73331, 73939},{233993, 239933, 293999, 373379, 373393, 593933, 593993, 719333, 739391, 739393, 739397, 739399},{2339933, 2399333, 2939999, 3733799, 5939333, 7393913, 7393931, 7393933},{23399339, 29399999, 37337999, 59393339, 73939133}};
	int n;
	cin >> n;
	for(int i : a[n -1]) cout << i << "\n";
}

/*
Code for superprimes generation - 
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define int ll 

vector<bool> not_prime((int)1e9+1, 0);
int n;
string temp = "";

int to_int(string a) {
	int ans = 0, c = 1;
	for(int i = (int)a.size() - 1; i >= 0; --i) {
		ans += (a[i] - '0') * c;
		c *= 10;
	}
	return ans;
}

bool prime_ok(string a) {
	while(!a.empty()) {
		if (not_prime[to_int(a)]) return 0;
		a.pop_back();
	}
	return 1;
}

void ok(string a) {
	if ((int)a.size() == n) {
		if (prime_ok(a)) {
			temp += a;
			temp += ", ";
		}
	} else {
		for(int i = 0; i <= 9; ++i) {
			if (i == 0 && a.size() == 0) continue;
			a += char(i + '0');
			ok(a);
			a.pop_back();
		}
	}
}

int32_t main() {
	for(int i = 2; i <= 1e9; ++i) {
		if (not_prime[i] == 0) {
			for(int j = 2; j * i <= 1e9; ++j) {
				not_prime[i * j] = 1;
			}
		}
	}
	not_prime[1] = 1;
	not_prime[0] = 1;
	for(n = 1; n <= 8; ++n) {
		cout << "{";
		ok("");
		temp.pop_back();
		temp.pop_back();
		cout << temp;
		temp = "";
		cout << "},";
	}
}
*/
