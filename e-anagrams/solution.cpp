#include <array>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string a, b; cin >> a >> b;
	const auto m = a.size(), n = b.size();

	if (m == n) {
		array<size_t, 26> c{}, d{};
		for (size_t i = 0; i < m; ++i)
			++c[a[i]-'a'], ++d[b[i]-'a'];
		cout << (c == d);
	} else cout << 0;

	return 0;
}
