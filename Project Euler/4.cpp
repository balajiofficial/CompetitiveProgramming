#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int ans = 2;
	for(int i = 5; i < 1e8; i += 2) {
		int k = 1;
		while(k < i) {
			k += 2;
			if(i % k == 0) {
				break;
			}
			if(k + 2 == i) {
				++ans;
			}
			if (ans == 10001) {
				cout << i << "\n";
				return 0;
			}
		}
	}
}
