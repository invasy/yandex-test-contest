#include <iostream>
#include <string>

using namespace std;

int main() {
	string j, s;
	cin >> j >> s;

	int result{};
	for (const auto& c : s)
		result += j.find(c) != string::npos;

	cout << result;

	return 0;
}
