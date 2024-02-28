#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

std::string normalize(std::string num) {
    num.erase(std::remove(num.begin(), num.end(), '+'), num.end());
    num.erase(std::remove(num.begin(), num.end(), '-'), num.end());
    num.erase(std::remove(num.begin(), num.end(), '('), num.end());
    num.erase(std::remove(num.begin(), num.end(), ')'), num.end());
    num.erase(std::remove(num.begin(), num.end(), ' '), num.end());
    if (num.length() == 7) {
        num.insert(0, "7495");
    }
    num.erase(0, 1);
    return num;
}

int main() {
    std::string num_to_add;
    std::string num1;
    std::string num2;
    std::string num3;
    std::cin >> num_to_add >> num1 >> num2 >> num3;
    num_to_add = normalize(num_to_add);
    num1 = normalize(num1);
    num2 = normalize(num2);
    num3 = normalize(num3);

    if (num1 == num_to_add) {
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }
    if (num2 == num_to_add) {
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }
    if (num3 == num_to_add) {
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }

    return 0;
}