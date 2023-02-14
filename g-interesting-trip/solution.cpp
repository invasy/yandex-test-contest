#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

/**
 * City data
 */
struct City {
	int x{};             ///< X coordinate
	int y{};             ///< Y coordinate
	int path{-1};        ///< path from starting city (number of roads)
	vector<size_t> adj;  ///< adjacency list of the cities reachable from this one

	/**
	 * Create a new city with specified coordinates
	 *
	 * @param x X coordinate
	 * @param y Y coordinate
	 */
	City(int x, int y) : x{x}, y{y} {}
};

/**
 * Calculate manhattan distance between cities
 *
 * @param[in] a the first city
 * @param[in] b the other city
 *
 * @returns Manhattan distance between @c a and @c b
 */
inline size_t distance(const City& a, const City& b) {
	return abs(static_cast<long>(b.x) - static_cast<long>(a.x))
		 + abs(static_cast<long>(b.y) - static_cast<long>(a.y));
}

int main() {
	size_t n;             ///< number of cities
	size_t k;             ///< max driving distance between cities
	size_t start;         ///< starting city
	size_t finish;        ///< destination city
    vector<City> cities;  ///< list of cities

	// Read input
	cin >> n;
	for (size_t i = 0; i < n; ++i) {
		int x, y; cin >> x >> y;
		cities.emplace_back(x, y);
	}
	cin >> k >> start >> finish;
	--start, --finish;  // Fix 1-based counting

	// Build graph (adjacency lists) of close enough cities
	for (size_t i = 0; i < n; ++i) {
		for (size_t j = i + 1; j < n; ++j) {
			if (distance(cities[i], cities[j]) <= k) {
				cities[i].adj.push_back(j);
				cities[j].adj.push_back(i);
			}
		}
	}

	// BFS (iterative with a queue)
	queue<size_t> q;
	q.emplace(start);
	cities[start].path = 0;
	while (!q.empty()) {
		auto i = q.front(); q.pop();
		// Check if the destination is reached
		if (i == finish) break;
		const auto& city = cities[i];
		const auto path = city.path + 1;
		for (const auto& j : city.adj) {
			auto& next_path = cities[j].path;
			// Check if the next city has been visited already
			if (next_path != -1) continue;
			next_path = path;
			// Early return
			if (j == finish) goto finish;
			q.emplace(j);
		}
	}

finish:
	cout << cities[finish].path;

	return 0;
}
