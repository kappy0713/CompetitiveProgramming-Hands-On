#include <iostream>
#include <vector>

int main() {
    int n, x;
    std::cin >> n >> x;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    // 探索アルゴリズム
    int left = 0, right = n - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (a[middle] > x) {
            right = middle - 1;
        } else if (a[middle] < x) {
            left = middle + 1;
        } else {
            std::cout << middle + 1 << std::endl;
            return 0;
        }
    }

    return 0;
}