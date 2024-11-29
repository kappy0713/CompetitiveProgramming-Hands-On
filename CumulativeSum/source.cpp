#include <iostream>
#include <vector>

int main() {
    int n, q;
    std::cin >> n >> q;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    // この実装だと実行制限時間に間に合わないため,計算量を減らした実装に変更してください
    for (int i = 0; i < q; ++i) {
        int left, right;
        std::cin >> left >> right;

        int answer = 0;
        for (int j = left - 1; j < right; ++j) {
            answer += a[j];
        }
        std::cout << answer << std::endl;
    }

    return 0;
}