#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	int b = 0, c = 0, d = 0;
	if (a.size() < 5) {
		cout << "Too weak\n";
		return 0;
	}
	for(int i = 0; i < a.size(); ++i) {
		if (a[i] >= 'A' && a[i] <= 'Z')
			++b;
		else if (a[i] >= '1' && a[i] <= '9')
			++c;
		else if (a[i] >= 'a' && a[i] <= 'z')
			++d;
	}
	if (b && c && d)
		cout  << "Correct\n";
	else
		cout << "Too weak\n";
}
