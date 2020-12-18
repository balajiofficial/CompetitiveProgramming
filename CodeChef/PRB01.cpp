#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool isPrime[100000];

void prime() {
	isPrime[1] = 1;
	for(int i = 2; i <= 100000; ++i) {
		if (isPrime[i] == 0) {
			for(int j = 2; i * j <= 100000; ++j) {
				isPrime[i * j] = 1;
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
		int n;
		cin >> n;
		cout << (isPrime[n] == 0 ? "yes" : "no") << "\n";
	}
}
