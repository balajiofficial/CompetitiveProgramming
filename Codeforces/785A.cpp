#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	int ans =0;
	while(n--) {
		string a;
		cin >> a;
		if (a == "Tetrahedron")
			ans += 4;
		else if (a == "Cube")
			ans += 6;
		else if (a == "Octahedron")
			ans+= 8;
		else if (a == "Dodecahedron")
			ans += 12;
		else
			ans += 20;
	}
	cout << ans << "\n";
}
