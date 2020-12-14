#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int b= 0, w= 0;
	for(int i = 0; i < 8; ++i) {
		for(int j = 0; j < 8; ++j) {
			char a;
			cin >> a;
			if (a >= 'A' && a <= 'Z') {
				if (a == 'Q')
					w += 9;
				else if (a == 'R')
					w += 5;
				else if (a == 'B')
					w += 3;
				else if (a == 'N')
					w += 3;
				else if (a == 'P')
					++w;
			} else if (a != '.') {
				if (a == 'q')
					b += 9;
				else if (a == 'r')
					b += 5;
				else if (a == 'b')
					b += 3;
				else if (a == 'n')
					b += 3;
				else if (a == 'p')
					++b;
			}
		}
	}
	if (w == b)
		cout << "Draw\n";
	else if (w > b)
		cout << "White\n";
	else
		cout << "Black\n";
}
