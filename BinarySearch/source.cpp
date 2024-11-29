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
    // この探索アルゴリズムは"全探索"のため,"二分探索"の実装に変更してください
    // 問題自体を解くことは可能で,実行制限時間にも間に合います
    for (int i = 0; i < n; ++i) {
        if (a[i] == x) {
            std::cout << i + 1 << std::endl;
            return 0;
        }
    }

    return 0;
}