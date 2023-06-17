#include<bits/stdc++.h>
using namespace std;

class FenwickTree {
private:
	vector<int> tree, arr;
	int n;

public:
	FenwickTree(int n, vector<int> inp) {
		this->tree = vector<int> (n+1, 0);
		this->arr = inp;
		this->n = n;

		for (int i = 1; i <= n; i++) {
			update(i, this->arr[i-1]);
		}
	}

	int sum(int k) {
		int s = 0;
		while (k >= 1) {
			s += this->tree[k];
			k -= k&-k;
		}
		return s;
	}

	void update(int k, int x) {
		while (k <= this->n) {
			this->tree[k] += x;
			k += k&-k;
		}
	}
};