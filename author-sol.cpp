#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int n;
	cin >> n;
	// worst-case sequence: {N, N - 1, N - 2, ..., 1}
	// when Manao tries to guess the i-th (1 <= i <= N), he will make (N - i) mistakes
	// the "mistake cost" for guessing the 1st button is 1, but for the 2nd button
	// the mistake cost becomes 2 because each time needs to press the correct button/s
	long long ans = 0;
	for (int x = 1; x <= n - 1; x++) {
		ans += ((n - x) * 1LL * x);
	}
	cout << ans + n << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	//cin >> tc;
	for (int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}
