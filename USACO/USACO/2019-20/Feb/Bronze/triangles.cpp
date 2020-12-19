#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

struct point {
	ld x;
	ld y;
};

int main() {
	ofstream cout ("triangles.out");
	ifstream cin ("triangles.in");
	int n;
	cin >> n;
	point a[100];
	for(int i = 0; i < n; ++i) {
		ld b, c;
		cin >> b >> c;
		a[i].x = b;
		a[i].y = c;
	}
	ld ans = LONG_MIN;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			for(int l = 0; l < n; ++l) {
				if (l != i && i != j) {
					if (a[i].y == a[j].y && a[l].x == a[j].x) {
						ld o = (a[i].x - a[j].x);
						o *= o;
						ld m = a[j].y - a[l].y;
						m *= m;
						ans = max(ans, o * m);
					}
				}	
			}
		}
	}
	cout << (ll)sqrt(ans) << "\n";
}
