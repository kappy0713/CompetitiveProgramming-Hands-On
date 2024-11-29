n, q = map(int, input().split())
a = list(map(int, input().split()))

# 総来場者数の配列を0で初期化
sum = [0] * (n+1)
for i in range(1, n+1):
    sum[i] = a[i-1] + sum[i-1]

# l日目からr日目までの総来場者数を計算
answer = []
for _ in range(q):
    left, right = map(int, input().split())
    result = sum[right] - sum[left-1]
    answer.append(result)

# 回答の出力
for x in answer:
    print(x)