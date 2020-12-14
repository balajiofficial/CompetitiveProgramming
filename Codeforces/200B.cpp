#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	double n, sum =0;
	cin >> n;
	for(int i = 0; i <n; ++i) {
		double a;
		cin >> a;
		sum += a;
	}
	cout << setprecision(12) << sum/n << "\n";
}
