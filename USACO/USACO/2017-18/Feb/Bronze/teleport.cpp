#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ofstream cout ("teleport.out");
	ifstream cin ("teleport.in");
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	cout << min(abs(x - a) + abs(b - y), min(abs(a - b), abs(a - y) + abs(b - x))) << "\n";
}
