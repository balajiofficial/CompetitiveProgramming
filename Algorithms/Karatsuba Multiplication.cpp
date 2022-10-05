#include<bits/stdc++.h>
using namespace std;

#define ll long long

// Assuming num1 and num2 have the same number of digits
int karatsuba(int num1, int num2) {
	int n = to_string(num1).size();
	if (n==1) {
		return num1*num2;
	} else {
		int s = n/2;
		string num1s = to_string(num1);
		string num2s = to_string(num2);
		int a = 0;
		int num = 1;
		for(int i = 0; i < s; i++) {
			a = a*num + (num1s[i] - '0');
			num *= 10;
		}
		num = 1;
		int b = 0;
		for(int i = s; i < n; i++) {
			b = b*num + (num1s[i] - '0');
			num *= 10;
		}
		int c = 0;
		num = 1;
		for(int i = 0; i < s; i++) {
			c = c*num + (num2s[i] - '0');
			num *= 10;
		}
		int d = 0;
		num = 1;
		for(int i = s; i < n; i++) {
			d = d*num + (num2s[i] - '0');
			num *= 10;
		}
		int part1 = karatsuba(a, c);
		int part2 = karatsuba(b, d);
		int part3 = karatsuba(a+b, c+d);
		return part1*pow(10,n)+pow(10,s)*(part3-part2-part1)+part2;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout << karatsuba(15,25) << '\n';	
}
