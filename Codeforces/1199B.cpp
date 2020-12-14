#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long double h, l;
	cin >> h >> l;
	cout << setprecision(15) << (l * l - h * h)/(2 * h) << "\n";
}
