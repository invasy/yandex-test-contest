#include <iostream>

using namespace std;

int main() {
	int a, b, n; cin >> n;
	if (n < 1) return 0;

	cin >> a; cout << a << '\n';
	for (auto i = 1; i < n; ++i) {
		cin >> b;
		if (a != b) cout << b << '\n';
		a = b;
	}

	return 0;
}
