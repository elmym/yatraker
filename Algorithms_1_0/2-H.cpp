#include <iostream>
#include <fstream>
#include <vector>

long long max_of_3(long long a, long long b, long long c) {
	if (a > b) {
		if (a > c) return a;
		else return c;
	}
	else {
		if (b > c) return b;
		else return c;
	}
}

long long min_of_3(long long a, long long b, long long c) {
	if (a < b) {
		if (a < c) return a;
		else return c;
	}
	else {
		if (b < c) return b;
		else return c;
	}
}


long long max_of_2(long long a, long long b) {
	if (a > b) return a;
	else return b;
}

long long min_of_2(long long a, long long b) {
	if (a < b) return a;
	else return b;
}

long long product(std::vector<long long> res) {
	long long ans = 1;
	for (int i = 0; i < res.size(); i++) {
		ans *= res[i];
	}
	return ans;
}

int main() {
	std::ifstream fin("input.txt");
	int tmp;
	std::vector<int> arr;
	
	while (fin >> tmp)
		arr.push_back(tmp);
	std::vector<long long> result = { arr[0], arr[1], arr[2] };
	long long res = product(result);
	std::vector<long long> max2 = { arr[0], arr[1] };
	std::vector<long long> min2 = { arr[0], arr[1] };
	long long max_pr2 = product(max2);
	long long min_pr2 = product(min2);
	long long max = std::max(arr[0], arr[1]);
	long long min = std::min(arr[0], arr[1]);

	for (int i = 2; i < arr.size(); i++) {
		if (max_of_3(res, max_pr2 * arr[i], min_pr2 * arr[i]) != res) {
			if (max_pr2 * arr[i] >= min_pr2 * arr[i]) {
				result[0] = max2[0];
				result[1] = max2[1];
				result[2] = arr[i];
			}
			else {
				result[0] = min2[0];
				result[1] = min2[1];
				result[2] = arr[i];
			}
			res = product(result);
		}
		if (max_of_3(max_pr2, max * arr[i], min * arr[i]) != max_pr2) {
			if (max * arr[i] >= min * arr[i]) {
				max2[0] = max;
				max2[1] = arr[i];
			}
			else {
				max2[0] = min;
				max2[1] = arr[i];
			}
			max_pr2 = product(max2);
		}
		if (min_of_3(min_pr2, max * arr[i], min * arr[i]) != min_pr2) {
			if (max * arr[i] <= min * arr[i]) {
				min2[0] = max;
				min2[1] = arr[i];
			}
			else {
				min2[0] = min;
				min2[1] = arr[i];
			}
			min_pr2 = product(min2);
		}
		max = max_of_2(max, arr[i]);
		min = min_of_2(min, arr[i]);
	}
	std::cout << result[0]<<" "<<result[1]<<" "<<result[2];
}