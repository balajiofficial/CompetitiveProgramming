#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	string a;
	cin >> a;
	int ans = count(a.begin(), a.end(), '8');
	int b = n/11;
	cout << min(b, ans) << "\n";
}
