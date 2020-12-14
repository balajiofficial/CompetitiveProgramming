#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	string b;
	getline(cin, b);
	string word;
	getline(cin, word);
	int ans =0, fin =0;
	for(int i = 0; i < word.size(); ++i) {
		if (word[i] >= 'A' && word[i] <= 'Z')
			++ans;
		if (word[i] == ' ')
			ans = 0;
		fin = max(ans, fin);
	}
	ans = fin;
	cout << ans << "\n";
}
