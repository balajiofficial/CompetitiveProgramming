#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	string c = to_string(a - b);
	string d = to_string(a - b + 1);
	cout << (d.size() > c.size() ? a - b - 1 : a - b + 1) << "\n";
}
