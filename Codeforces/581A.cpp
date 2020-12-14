#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int a, b;
	cin >> a >> b;
	cout << min(a, b) << " " << abs(a - b)/2 << "\n";
}
