#include<bits/stdc++.h>

using namespace std;

#define ll long long

list<int> a;

bool is(int b) {
	for(int c : a) {
		if (c == b) return 1;
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n; ++i) {
		int b;
		cin >> b;
		if (!is(b)) {
			if (a.size() == k) {
				a.pop_back();
			}
			a.push_front(b);
		}
	}
	cout << a.size() << "\n";
	for(int c : a) {
		cout << c << " ";
	}
	cout << "\n";
}
