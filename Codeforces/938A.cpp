#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	char vow[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
	int n;
	cin >> n;
	string a;
	cin >> a;
	for(int i= 0; i < a.size(); ++i) {
		bool ok = 0;
		for(int j = 0; j < 6; ++j) {
			if (vow[j] == a[i]) {
				ok = 1;
				break;
			}
		}
		if (ok) {
			ok = 0;
			for(int j = 0; j < 6; ++j) {
				if (vow[j] == a[i + 1])
					ok = 1;
			}
			if (ok) {
				a.erase(a.begin()+(i + 1));
				--i;
			}
		}
	}
	cout << a << "\n";
}
