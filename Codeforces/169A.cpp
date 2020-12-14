#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, a, b;
	cin >> n >> a >> b;
	int c[2000];
	for(int i = 0; i <n; ++i)
		cin >> c[i];
	sort(c, c+n);
	cout << abs(c[b - 1] - c [b]) << "\n";
}
