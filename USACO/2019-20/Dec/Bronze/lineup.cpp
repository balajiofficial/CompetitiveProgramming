#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n;
vector<string> cows, a1, a2;

int ind(string s) {
	for(int i = 0; i < 8; ++i) {
		if (cows[i] == s)
			return i;
	}
	return -1;
}

bool ok() {
	for(int i = 0; i < n; ++i) {
		if (abs(ind(a1[i]) - ind(a2[i])) != 1)
			return 0;
	}
	return 1;
}

int main() {
	ofstream cout ("lineup.out");
	ifstream cin ("lineup.in");
	cin >> n;
	cows.push_back("Bessie");
	cows.push_back("Buttercup");
	cows.push_back("Belinda");
	cows.push_back("Beatrice");
	cows.push_back("Bella");
	cows.push_back("Blue");
	cows.push_back("Betsy");
	cows.push_back("Sue");
	for(int i = 0; i < n; ++i) {
		string a, b, c;
		cin >> a >> c;
		cin >> c;
		cin >> c;
		cin >> c >> b;
		a1.push_back(a);
		a2.push_back(b);
	}
	sort(cows.begin(), cows.end());
	do {
		if (ok()) {
			for(int i =0; i < 8; ++i) {
				cout << cows[i] << "\n";
			}
			return 0;
		}
	} while(next_permutation(cows.begin(), cows.end()));
}
