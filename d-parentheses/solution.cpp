#include <iostream>
#include <string>

using namespace std;

void bt(size_t n, size_t open, size_t close, string& combination) {
	if (combination.size() == 2 * n) {
		cout << combination << '\n';
		return;
	}
	if (open < n) {
		combination.push_back('(');
		bt(n, open + 1, close, combination);
		combination.pop_back();
	}
	if (close < open) {
		combination.push_back(')');
		bt(n, open, close + 1, combination);
		combination.pop_back();
	}
}

int main() {
	string combination;
	size_t n; cin >> n;

	bt(n, 0, 0, combination);

	return 0;
}
