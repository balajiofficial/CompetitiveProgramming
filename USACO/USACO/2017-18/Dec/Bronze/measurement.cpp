#include<bits/stdc++.h>

using namespace std;

#define ll long long 

struct Cow {
	int day, change;
	string name;
};

bool sortCows(Cow a, Cow b) {
	return a.day < b.day;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ofstream cout ("measurement.out");
	ifstream cin ("measurement.in");
	int n, ans = 0;
	cin >> n;
	Cow cows[100];	
	set<char> dis = {'b', 'e', 'm'};
	for(int i = 0; i < n; ++i) {
		cin >> cows[i].day >> cows[i].name >> cows[i].change;
	}
	sort(cows, cows+n, sortCows);
	int a = 0, b = 0, c = 0;
	for(int i = 0; i < n; ++i) {
		set<char> temp = dis;
		if (cows[i].name == "Bessie") {
			a += cows[i].change;
		} else if (cows[i].name == "Elsie") {
			b += cows[i].change;
		} else {
			c += cows[i].change;
		}
		int maxMilk = max({a, b, c});
		if (a == maxMilk) {
			dis.insert('b');
		} else if (dis.find('b') != dis.end()) {
			dis.erase('b');
		}
		if (b == maxMilk) {
			dis.insert('e');
		} else if (dis.find('e') != dis.end()) {
			dis.erase('e');
		}
		if (c == maxMilk) {
			dis.insert('m');
		} else if (dis.find('m') != dis.end()) {
			dis.erase('m');
		}
		ans += (dis != temp);
	}
	cout << ans << "\n";
}
