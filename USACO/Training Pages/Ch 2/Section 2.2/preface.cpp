/*
ID: balajik2
TASK: preface
LANG: C++14
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
	ofstream cout ("preface.out");
	ifstream cin ("preface.in");
	int n;
	cin >> n;
	int ans[7];
	memset(ans, 0, sizeof(ans));
	for(int i = 1; i <= n; ++i) {
		int a = i % 10;
		if (a <= 3) ans[0] += a;
		else if (a == 4) ans[0]++, ans[1]++;
		else if (a <= 8) ans[1]++, ans[0] += a - 5;
		else ans[0]++, ans[2]++;
		
		a = (i/10) % 10;
		if (a <= 3) ans[2] += a;
		else if (a == 4) ans[2]++, ans[3]++;
		else if (a <= 8) ans[3]++, ans[2] += a - 5;
		else ans[2]++, ans[4]++;
		
		a = (i/100) % 10;
		if (a <= 3) ans[4] += a;
		else if (a == 4) ans[4]++, ans[5]++;
		else if (a <= 8) ans[5]++, ans[4] += a - 5;
		else ans[4]++, ans[6]++;
		
		a = (i/1000);
		if (a <= 3) ans[6] += a;
	}
	char a[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
	for(int i = 0; i < 7; ++i) {
		if (ans[i] != 0) cout << a[i] << " " << ans[i] << "\n";
	}
}
