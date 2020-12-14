#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int t;
	cin>> t;
	while(t--) {
		int h, m;
		cin >> h >> m;
		int time = (23 - h) * 60;
		time += 60 - m;
		cout << time << "\n";
	}
}
