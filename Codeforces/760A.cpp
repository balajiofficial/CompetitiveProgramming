#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int m, d, days = 0;
	cin >> m >> d;
	if (m <= 7) {
		if (m == 2) {
			days = 28;
		} else if (m % 2)
			days =31;
		else {
			days = 30;
		}
		if (days == 31) {
			if (d >= 6) {
				cout << "6\n";
		}else {
				cout << "5\n";
		}
			return 0;
		} else if (days == 30) {
			if (d == 7) {
				cout  << "6\n";
			} else {
				cout << "5\n";
			}
			return 0;
		} else {
			if (d == 1)
				cout << "4\n";
			else
				cout << "5\n";
			return 0;
		}
	} else {
		if (m == 2) {
			days = 28;
		} else if (m % 2) {
			days = 30;
		} else {
			days = 31;
		}
		if (days == 31) {
			if (d >= 6) {
				cout << "6\n";
			} else {
				cout << "5\n";
			}
			return 0;
		} else if (days == 30) {
			if (d == 7)
				cout<< "6\n";
			else
				cout << "5\n";
		   return 0;	
		} else {
			if (d == 1)
				cout << "4\n";
			else
				cout << "5\n";
		}
	}
}
