#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	char a;
	cin >> a;
	if (a == 'A' || a == 'I' || a == 'E' || a == 'O' || a == 'U') {
		cout << "Vowel\n";
	} else {
		cout << "Consonant\n";
	}
}
