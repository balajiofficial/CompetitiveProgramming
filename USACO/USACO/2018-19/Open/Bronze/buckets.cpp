#include<bits/stdc++.h>

using namespace std;

#define ll long long

struct Point {
	int x, y;
};

Point barn, rock, lake;

int dist(Point a, Point b) {
	return abs(a.x - b.x) + abs(a.y - b.y);
}

int main() {
	ofstream cout ("buckets.out");
	ifstream cin ("buckets.in");
	for(int i = 0; i < 10; ++i) {
		for(int j = 0; j < 10; ++j) {
			char a;
			cin >> a;
			if (a == 'B') {
				barn.x = i;
				barn.y = j;
			}
			if (a == 'R') {
				rock.x = i;
				rock.y = j;
			}
			if (a == 'L') {
				lake.x = i;
				lake.y = j;
			}
		}
	}
	if ((barn.x == lake.x || barn.y == lake.y) && dist(barn, lake) >= dist(barn, rock) + dist(lake, rock)) {
		cout << dist(barn, lake) + 1 << "\n";
	} else {
		cout << dist(barn, lake) - 1 << "\n";
	}
}
