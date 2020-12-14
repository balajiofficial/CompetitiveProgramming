#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int w, h;
	cin >> w >> h;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	for(int i = h; i >= 1; --i) {
		if (i == b)
			w -= a;
		else if (i == d)
			w -= c;
		w += i;
		w = max(0, w);
	}
	cout << w << "\n";
}
