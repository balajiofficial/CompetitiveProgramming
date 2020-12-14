#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		string a;
		cin >> a;
		vector<int> b;
		for(int i = 0; i < a.size(); ++i) {
			int j = i;
			if (a[i] == '1') {
				while(j + 1 < a.size() && a[j + 1] == '1') {
					++j;
				}
				b.push_back(j - i+1);
				i= j;
			}
		}
		int ans =0;
		sort(b.begin(), b.end(), greater<int>());
		for(int i = 0; i < b.size(); i += 2){
			ans += b[i];
		}
		cout << ans << "\n";
	}
}
