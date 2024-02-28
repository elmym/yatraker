#include <iostream>
#include <vector>
#include <fstream>

int main() {
	int result = 0, num;
	std::vector<int> arr;
	std::ifstream fin("input.txt");

	while (fin >> num)
	{
		arr.push_back(num);
	}

	for (int i = 1; i < arr.size() - 1; i++) {
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) result++;
	}
	std::cout << result;
	return 0;
}