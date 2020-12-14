#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int a, b;
	cin >> a >> b;
	if (a > b)
		swap(a, b);
	int sum = 0, i = 1;
	while(a != b) {
		if (i % 2) {
			++a;
			sum += i/2 + 1;
		} else {
			--b;
			sum += i/2;
		}
		++i;
	}
	cout << sum << "\n";
}
