#include<bits/stdc++.h>

using namespace std;

#define ll long long

int grid[9][9] = {{3, 2, 0, 7, 9, 5, 0, 0, 1},
				  {0, 4, 1, 0, 0, 8, 5, 0, 0},
				  {8, 9, 0, 1, 0, 4, 3, 0, 0},
				  {0, 0, 0, 0, 0, 0, 0, 5, 3},
				  {0, 0, 2, 9, 0, 3, 6, 8, 0},
				  {6, 0, 8, 2, 5, 7, 1, 9, 0},
				  {5, 8, 9, 4, 0, 0, 7, 0, 2},
				  {2, 0, 0, 3, 8, 0, 0, 0, 5},
				  {4, 6, 3, 0, 7, 0, 9, 1, 0}};

bool ok(int i, pair<int, int> ind) {
	for(int j = 0; j < 9; ++j) {
		if (grid[j][ind.second] == i && ind.first != i) {
			return 0;
		}
	}
	for(int j = 0; j < 9; ++j) {
		if (grid[ind.first][j] == i && ind.second != i) {
			return 0;
		}
	}
	int a = ind.first - ind.first % 3;
	int b = ind.second -  ind.second % 3;

	for(int j = a; j < a + 3; ++j) {
		for(int k = b; k < b + 3; ++k) {
			if (grid[j][k] == i) {
				return 0;
			}
		}
	}

	return 1;
}

pair<int,int> find_next() {
	for(int i = 0; i < 9; ++i) {
		for(int j = 0; j < 9; ++j) {
			if (grid[i][j] == 0) {
				return {i, j};
			}
		}
	}
	return {-1, -1};
}

bool solve() {
	pair<int, int> ind = find_next();
	if (ind.first == -1) {
		return 1;
	} else {
		for(int i = 1; i <= 9; ++i) {
			if (ok(i, ind)) {
				
				grid[ind.first][ind.second] = i;
				
				if (solve()) {
					return 1;
				}

				grid[ind.first][ind.second] = 0;
			}
		}
		return 0;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	if (!solve()) {
		cout << "The sudoku is not solvable\n";
		return 0;
	}

	for(int i = 0; i < 9; ++i) {
		for(int j = 0;  j < 9; ++j) {
			cout << grid[i][j] << " ";
		}
		cout << "\n";
	}
}
