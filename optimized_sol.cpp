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
		// the only case wherein it is impossible to create a strictly increasing 
		// sequence is when the original sequence is equal or in decreasing order
		vector<int> copy = a;
		sort(copy.begin(), copy.end());
		copy.resize(unique(copy.begin(), copy.end()) - copy.begin());
		if ((int) copy.size() == 1 || is_sorted(a.rbegin(), a.rend())) {
			cout << "No" << '\n';
			continue;
		}
		cout << "Yes" << '\n';
	}
	return 0;
}
