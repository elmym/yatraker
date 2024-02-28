#include <iostream>
#include <vector>
#include <math.h>

void find_p_n(int k, int M, int S, int& p, int& n) {
	p = 1;
	n = 0;
	while (k > 0)
	{
		k -= S;
		n++;
		if (n > M) {
			n -= M;
			p++;
		}
	}
}

void find_s_bounds(int k, int M, int p, int n, int& smin, int& smax) {
	smin = 0;
	smax = 0;
	smin = round(k * 1.0 / (M * (p - 1) + n));
	if (M * (p - 1) + n - 1 == 0)smax = 10;
	else smax = (k - 1) / (M * (p - 1) + n - 1);
}

int main() {
	int K1, M, K2, P2, N2;
	std::cin >> K1 >> M >> K2 >> P2 >> N2;


	if (K2 < N2 + M * (P2 - 1) || N2 > M) {
		std::cout << "-1 -1";
		return 0;
	}
	
	if (P2 == 1 && N2 == 1) {
		if (K1 < K2) {
			std::cout << "1 1";
			return 0;
		}
		else if (M == 1) {
			std::cout << "0 1";
			return 0;
		}
	}
	
	int smin, smax;
	find_s_bounds(K2, M, P2, N2, smin, smax);


	if (smin * (M * (P2-1) + N2) < K2) {
		smin++;
	}
	if (smax < smin) {
		std::cout << "-1 -1";
		return 0;
	}

	int p, n;
	find_p_n(K1, M, smin, p, n);

	for (int s = smin + 1; s <= smax; s++) {
		int p2, n2;
		find_p_n(K1, M, s, p2, n2);
		if (p2 != p) {
			p = 0;
		}
		if (n2 != n) {
			n = 0;
		}
	}



	std::cout << p << " " << n;
	return 0;
}