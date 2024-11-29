#include <iostream>
#include <vector>

int main() {
    int n, q;
    std::cin >> n >> q;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    // 総来場者数の配列を0で初期化
    std::vector<int> sum(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        sum[i] = a[i - 1] + sum[i - 1];
    }

    // l日目からr日目までの総来場者数を計算
    std::vector<int> answer;
    for (int i = 0; i < q; ++i) {
        int left, right;
        std::cin >> left >> right;
        int result = sum[right] - sum[left - 1];
        answer.push_back(result);
    }

    // 回答の出力
    for (int x : answer) {
        std::cout << x << std::endl;
    }

    return 0;
}