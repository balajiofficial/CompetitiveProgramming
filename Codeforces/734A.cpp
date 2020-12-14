#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int ans =0;
	string a;
	cin>> a;
	for(int i = 0; i < n; ++i) {
		if (a[i] == 'A')
			ans++;
	}
	if (ans > n -ans)
		cout << "Anton\n";
	else if (ans < n - ans)
		cout << "Danik\n";
	else
		cout << "Friendship\n";
}
