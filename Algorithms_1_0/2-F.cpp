#include <iostream>
#include <vector>

int main()
{
	int N;
	std::cin >> N;
	std::vector<int> arr(N);
	std::vector<int> result;
	for (int i = 0; i < N; ++i)
		std::cin >> arr[i];

	for (int i = 0; i < N; ++i)
	{
		int left = i, right = N - 1;
		while (left <= right && left < N && right >= 0 && arr[left] == arr[right])
		{
			++left;
			--right;
		}
		if (left > right)
		{
			for (int j = i - 1; j >= 0; --j)
				result.push_back(arr[j]);
			break;
		}
	}
	std::cout << result.size() << std::endl;
	for (auto& el : result)
		std::cout << el << " ";
}