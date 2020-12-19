#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool isPrime[5000];

void prime() {
	isPrime[1] = 1;
	for(int i = 2; i < 5000; ++i) {
		if (isPrime[i] == 0) {
			for(int j = 2; i * j < 5000; ++j) {
				isPrime[j * i] = 1;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	prime();
	int t;
	cin >> t;
	while(t--) {
		int x, y;
		cin >> x >> y;
		for(int i = 1; i < 5000; ++i) {
			if (isPrime[x + y + i] == 0) {
				cout << i << "\n";
				break;
			}
		}
	}
}
