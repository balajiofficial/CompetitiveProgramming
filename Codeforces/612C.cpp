#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool open(char a) {
	return a == '<' || a == '(' || a == '{' || a == '[';
}

bool pairs(char a, char b) {
	return (a == '<' && b == '>') || (a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}');
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	cin >> a;
	int ans = 0;
	stack<char> st;
	for(int i = 0; i < a.size(); ++i) {
		if (open(a[i])) {
			st.push(a[i]);
		} else {
			if (st.size() == 0) {
				cout << "Impossible\n";
				return 0;
			}
			if (pairs(st.top(), a[i]) == 0) {
				++ans;
			}
			st.pop();
		}
	}
	if (st.size()) cout << "Impossible\n";
	else cout << ans << "\n";
}
