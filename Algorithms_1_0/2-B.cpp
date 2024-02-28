#include <iostream>
#include <vector>

int main() {
	std::vector<int> arr;
	int num;

	std::cin >> num;
	while (num != -2000000000) {
		arr.push_back(num);
		std::cin >> num;
	}

	int asc = 0, des = 0, con = 0;

	for (int i = 1; i < arr.size(); ++i) {
		if (arr[i - 1] > arr[i]) {
			des++;
		}
		else if (arr[i - 1] < arr[i]) {
			asc++;
		}
		else if (arr[i - 1] == arr[i]) {
			con++;
		}
	}

	if (des != 0 && asc == 0 && con == 0) std::cout << "DESCENDING";
	else if (des != 0 && asc == 0 && con != 0) std::cout << "WEAKLY DESCENDING";
	else if (asc != 0 && des == 0 && con != 0) std::cout << "WEAKLY ASCENDING";
	else if (asc != 0 && des == 0 && con == 0) std::cout << "ASCENDING";
	else if (asc == 0 && des == 0 && con != 0) std::cout << "CONSTANT";
	else std::cout << "RANDOM";

	return 0;
}