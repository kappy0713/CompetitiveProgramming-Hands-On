n, x = map(int, input().split())
a = list(map(int, input().split()))

# 探索アルゴリズム
# この探索アルゴリズムは"全探索"のため,"二分探索"の実装に変更してください
# 問題自体を解くことは可能で,実行制限時間にも間に合います
for i in range(n):
  if a[i] == x:
    exit(print(i + 1))