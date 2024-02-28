#include <iostream>
#include <cmath>

int main() {
	int N, K, M, res=0;
	std::cin >> N >> K >> M;
	if (M > K || K > N || M > N) {
		std::cout << 0;
		return 0;
	}
	int col = floor((K * 1.0) / (M * 1.0));

	while (N >= K) {
		int zagot = -1;
		while (N >= 0) {
			N -= K;
			zagot++;
		}
		N = N + K;
		while (zagot > 0) {
			N += K - col * M;
			res++;
			zagot--;
		}
	}
	std::cout << col*res;
	return 0;
}