#include <iostream>
#include <vector>

int main() {
	int N;
	std::cin >> N;

	std::vector<int> arr(N);
	for (int i = 0; i < N; ++i) {
		std::cin >> arr[i];
	}

	int x;
	std::cin >> x;
	
	int distance = std::abs(arr[0]-x);
	int ans = arr[0];
	for (int i = 0; i < N; ++i) {
		if (std::abs(arr[i] - x) < distance) {
			distance = std::abs(arr[i] - x);
			ans = arr[i];
		}
	}
	std::cout << ans;
	return 0;
}