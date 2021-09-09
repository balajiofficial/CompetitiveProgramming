#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	double h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;

	if (t1 > t2) swap(t1, t2);

	bool a1 = (t1 <= h && h < t2);
	bool a2 = (t1 * 5 <= m && m < t2 * 5);
	bool a3 = (t1 * 5 <= s && s < t2 * 5);

	cout << (a1 + a2 + a3 == 3 || a1 + a2 + a3 == 0 ? "YES" : "NO") << "\n";

}
