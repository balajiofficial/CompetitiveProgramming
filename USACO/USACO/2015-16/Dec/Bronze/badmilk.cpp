#include<bits/stdc++.h>

using namespace std;

#define ll long long

struct Person {
	int name, milk, time;
};

struct Sick {
	int name, time;
};

Sick b[50];
int n, m, d, s;
Person a[1000];

bool didDrink(int nam, int mil, int tim) {
	for(int i = 0; i < d; ++i) {
		if (a[i].name == nam && a[i].milk == mil && a[i].time < tim) {
			return 1;
		}
	}
	return 0;
}

bool isBad(int u) {
	for(int i = 0; i < s; ++i) {
		if (!didDrink(b[i].name, u, b[i].time)) {
			return 0;
		}
	}
	return 1;
}

int milkCount(int u) {
	set<int> k;
	for(int i = 0; i < d; ++i) {
		if (a[i].milk == u) {
			k.insert(a[i].name);
		}
	}
	return (int)k.size();
}

int main() {
	ofstream cout ("badmilk.out");
	ifstream cin ("badmilk.in");
	cin >> n >> m >> d >> s;
	for(int i =0; i < d; ++i) {
		cin >> a[i].name >> a[i].milk >> a[i].time;
	}
	for(int i=0; i < s; ++i) {
		cin >> b[i].name >> b[i].time;
	}
	int ans = 0;
	for(int i = 1; i <= m; ++i) {
		if (isBad(i)) {
			ans = max(ans, milkCount(i));
		}
	}
	cout << ans << "\n";
}