#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> l;
    l.push_back(max(a, c) * (b + d));
    l.push_back(max(a, d) * (b + c));
    l.push_back(max(b, c) * (a + d));
    l.push_back(max(b, d) * (a + c));

    int min_area = *min_element(l.begin(), l.end());

    if (min_area == l[0]) {
        cout << max(a, c) << ' ' << b + d;
    } else if (min_area == l[1]) {
        cout << max(a, d) << ' ' << b + c;
    } else if (min_area == l[2]) {
        cout << max(b, c) << ' ' << a + d;
    } else {
        cout << max(b, d) << ' ' << a + c;
    }
return 0;
}