#include <iostream>

int main() {
	int a, b, k, l;
	std::cin >> a >> b >> k >> l;

	int a_min = a * (k - 1) + k;
	int a_max = a * (k + 1) + k;
	int b_min = b * (l - 1) + l;
	int b_max = b * (l + 1) + l;
	
	int min = std::max(a_min, b_min);
	int max = std::min(a_max, b_max);

	if (max < min) {
		std::cout << -1;
	}
	else {
		std::cout << min << " " << max;
	}
	return 0;
}