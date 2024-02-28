#include <iostream>

int main() {
	double a, b, c, d, e, f;
	std::cin >> a >> b >> c >> d >> e >> f;

	if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0) {
		std::cout << 5;
		return 0;
	}

	if (a == 0) {
		if (b == 0) {
			if (e == 0) {
				if (d == 0) {
					if (c == 0) {
						if (f == 0) {
							std::cout << 4 << " " << f / d;
							return 0;
						}
						else {
							std::cout << 0;
							return 0;
						}
					}
					else {
						std::cout << 3 << " " << f / c;
						return 0;
					}
				}
				else if (c == 0) {
					std::cout << 4 << " " << f / d;
					return 0;
				}
				else {
					std::cout << 1 << " " << -c / d << " " << f / d;
					return 0;
				}
			}
			else {
				std::cout << 0;
				return 0;
			}
		}
		else if (e == 0) {
			if (c == 0) {
				if (f == 0) {
					std::cout << 4 << " " << 0;
					return 0;
				}
				else {
					std::cout << 0;
					return 0;
				}
			}
			else if (d == 0) {
				std::cout << 3 << " " << f / c;
				return 0;
			}
			else {
				std::cout << 1 << " " << -c / d << " " << f / d;
				return 0;
			}
		}
		else if (c == 0) {
			if (b * f == d * e) {
				std::cout << 4 << " " << e / b;
				return 0;
			}
			else {
				std::cout << 0;
				return 0;
			}
		}
		else {
			std::cout << 2 << " " << f / c - d * e / b / c << " " << e / b;
			return 0;
		}
	}
	else {
		if (b == 0) {
			if (d == 0) {
				if (e * c != a * f) {
					std::cout << 0;
					return 0;
				}
				else {
					std::cout << 3 << " " << e / a;
					return 0;
				}
			}
			else {

				std::cout << 2 << " " << e / a << " " << f / d - c * e / a / d;
				return 0;

			}
		}
		else if (c == 0) {
			if (d == 0) {
				if (f == 0) {
					std::cout << 1 << " " << -a / b << " " << e / b;
					return 0;
				}
				else {
					std::cout << 0;
					return 0;
				}
			}
			else {
				std::cout << 2 << " " << e / a - b * f / d / a << " " << f / d;
				return 0;
			}
		}
		else {
			if (b * f == d * e) {
				std::cout << 1 << " " << -a / b << " " << e / b;
				return 0;
			}
			else if (a / c == b / d) {
				std::cout << 0;
				return 0;
			}
			else {
				std::cout << 2 << " " << e / a - b * (f * a - c * e) / a / (d * a - c * b) << " " << (f * a - c * e) / (d * a - c * b);
				return 0;
			}
		}
	}
	return 0;
}
