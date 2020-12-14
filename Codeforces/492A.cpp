#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, sum =0;
	cin >> n;
	int a = 1;
	while(sum <= n) {
		sum += (a * (a + 1))/2;
		++a;
	}
	cout << a - 2 << "\n";
}
