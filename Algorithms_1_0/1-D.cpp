#include <iostream>

int main() {
    int a, b, c, ans;
    std::cin >> a >> b >> c;

    if (c < 0) {
        std::cout << "NO SOLUTION";
        return 0;
    }

    if (a == 0) {
        if (b == c*c) std::cout << "MANY SOLUTIONS";
        else std::cout << "NO SOLUTION";
        return 0;
    }

    if ((c * c - b) % a == 0) {
        std::cout << (c * c - b) / a;
    }
    else {
        std::cout << "NO SOLUTION";
        return 0;
    }
    return 0;
}