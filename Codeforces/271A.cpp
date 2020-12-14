#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int y;
	cin >> y;
	for(int i = y +1; i < 9000; ++i) {
		int j = i;
		int a = j %10;
		j /= 10;
		int  b= j %10;
		j /= 10;
		int c= j %10;
		j /= 10;
		int d = j %10;
		if (a != b && a != c && a != d && b != c && b != d && c != d) {
			cout << i << "\n";
			break;
		}
	}
}
