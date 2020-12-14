#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n, m, ok = -1;
		cin >> n >> m;
		int a[1000], b[1000];
		for(int i = 0; i < n; ++i)
			cin >>a[i];
		for(int i = 0; i < m; ++i) {
			cin >> b[i];
		}
		for(int i = 0; i < m; ++i) {
			for(int j = 0; j < n; ++j) {
				if (b[i] == a[j]) {
					ok = b[i];
					break;
				}
			}
		}
		if (ok == -1)
			cout << "NO\n";
		else
			cout << "YES\n1 " << ok << "\n";
	}
}
