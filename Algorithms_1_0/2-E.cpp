#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int N;
	std::cin >> N;
	std::vector<int> arr(N);

	for (int i = 0; i < N; i++) {
		std::cin >> arr[i];
	}

	int best = 0;
	int best_i = 0;
	for (int i = 0; i < arr.size(); ++i) {
		if (arr[i] > best) {
			best = arr[i];
			best_i = i;
		}
	}

	int res = -1;
	for (int i = best_i + 1; i < arr.size() - 1; ++i) {
		if (arr[i] % 10 == 5 && arr[i + 1] < arr[i]&&arr[i]>res) {
			res = arr[i];
		}
	}

	int ans = 0;
	if (res == -1) std::cout << ans;
	else {
		std::sort(arr.rbegin(), arr.rend());
		auto it = std::find(arr.begin(), arr.end(), res);
		ans = std::distance(arr.begin(), it)+1;
		if (res == best)
			std::cout << 1;
		else
			std::cout << ans;
	}
	return 0;
}