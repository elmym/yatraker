#include <iostream>

int main() {
	int A, B, C, D, E;
	std::cin >> A >> B >> C >> D >> E;
	if ((A <= D && C <= E) || (A <= E && C <= D) || (A <= E && B <= D) || (A <= D && B <= E) || (B <= E && C <= D) || (C <= E && B <= D)) {
		std::cout << "YES";
	}
	else std::cout << "NO";
	return 0;
}
