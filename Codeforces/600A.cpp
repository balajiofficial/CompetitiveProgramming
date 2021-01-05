#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool valid(string a) {
	if (a.size()==0) return 0;
	if (a.size()==1&&a[0]=='0') return 1;
	if (a.size()>1&&a[0]=='0') return 0;
	for(int i =0; i < a.size(); ++i) {
		if ((a[i] >= '0' && a[i] <= '9') == 0) return 0;
	}
	return 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	vector<string> ans1, ans2;
	string temp;
	for(int i = 0; i < a.size(); ++i) {
		if (a[i] == ',' || a[i] == ';') {
			if(valid(temp)) {
				ans1.push_back(temp);
			} else {
				ans2.push_back(temp);
			}
			temp = "";
		} else {
			temp += a[i];
		}
	}
	if (valid(temp)) {
		ans1.push_back(temp);
	} else {
		ans2.push_back(temp);
	}
	if(ans1.size()) {
		cout << '"';
		for(int i = 0; i < ans1.size(); ++i) {
			cout << ans1[i];
			if (i != ans1.size() - 1) {
				cout << ',';
			} else {
				cout << '"';
			}
		}
		cout << "\n";
	} else {
		cout << "-\n";
	}
	if (ans2.size()) {
		cout << '"';
		for(int i = 0; i < ans2.size(); ++i) {
			cout << ans2[i];
			if (i != ans2.size() - 1) {
				cout << ",";
			} else {
				cout << '"';
			}
		}
		cout << "\n";
	} else {
		cout << "-\n";
	}
}
