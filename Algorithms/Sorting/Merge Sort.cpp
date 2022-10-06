#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> mergesort(vector<int> a) {
	
	if (a.size() == 1) {
		return a;
	}

	vector<int> b;
	vector<int> c;
	for(int i = 0; i < a.size()/2; i++) {
		b.push_back(a[i]);
	}
	for(int i = a.size()/2; i < a.size(); i++) {
		c.push_back(a[i]);
	}

	b = mergesort(b);
	c = mergesort(c);

	vector<int> d;
	int i = 0;
	int j = 0;
	while(i<b.size()||j<c.size()) {
		if (i >= b.size()) {
			d.push_back(c[j]);
			j++;
			continue;
		}
		if(j >= c.size()) {
			d.push_back(b[i]);
			i++;
			continue;
		}
		if (b[i]>c[j]) {
			d.push_back(c[j]);
			j++;
		} else {
			d.push_back(b[i]);
			i++;
		}
	}
	return d;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> ans = mergesort({10, 9, 5, 7, 4, 6, 1, 1, 8, 3, 2});
	for(int e : ans) {
		cout << e << " ";
	}	
	cout << '\n';
}
