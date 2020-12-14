#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	set<char> a;
	string b;
	for(int i = 0; i < b.size(); ++i) {
		a.insert(b[i]);
	}
	if (a.size() %2)
		cout << "IGNORE HIM!" << "\n";
	else
		cout << "CHAT WITH HER!" << "\n";
}
