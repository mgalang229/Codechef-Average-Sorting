#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// in order to create an increasing sequence, the 
		// sequence must not be all equal or in decreasing order
		bool is_decreasing = true;
		for (int i = 0; i + 1 < n; i++) {
			if (a[i] < a[i + 1]) {
				is_decreasing = false;
				break;
			}
		}
		cout << (!is_decreasing ? "Yes" : "No") << '\n';
	}
	return 0;
}
