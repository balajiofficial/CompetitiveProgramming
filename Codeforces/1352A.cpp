#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, i = 0;
		cin >> n;
		vector<int> a;
		while(n != 0) {
			int b= n % 10;
			n /= 10;
			if (b != 0)
				a.push_back(b * pow(10, i));
			++i;
		}
		cout << a.size() << "\n";
		for(int i = 0; i < a.size(); ++i) {
			cout << a[i] << " ";
		}
		cout << "\n";
	}
}
