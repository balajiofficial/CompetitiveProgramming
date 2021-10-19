#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		double W, H, x1, x2, y1, y2, w, h;
		cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h;
		double ans = 1e9;
		if (w + x2 - x1 <= W) {
			double xi = min(max(double(0), x2 - (W - w)), max(double(0), w - x1));
			ans = min(ans, xi);
		}
		if (h + y2 - y1 <= H) {
			double yi = min(max(double(0), y2 - (H - h)), max(double(0), h - y1));
			ans = min(ans, yi);
		}
		ans = (ans == 1e9 ? -1 : ans);
		cout << setprecision(10) << ans << "\n";
	}
}
