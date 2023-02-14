#include <iostream>

using namespace std;

int main() {
	size_t l{}, m{}, n; cin >> n;

	for (size_t i = 0; i < n; ++i) {
		int d; cin >> d;
		if (d) m = max(++l, m);
		else l = 0;
	}

	cout << m;

	return 0;
}
