#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	auto w = vector<int>(n);
	for (int i = 1; i <= n; ++i) {
		int p;
		cin >> p;

		w[p - 1] = i;
	}

	for (const auto& v : w) {
		cout << v << ' ';
	}

	return 0;
}