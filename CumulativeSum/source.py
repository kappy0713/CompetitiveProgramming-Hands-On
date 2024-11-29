n, q = map(int, input().split())
a = list(map(int, input().split()))

# この実装だと実行制限時間に間に合わないため,計算量を減らした実装に変更してください
for i in range(q):
  left, right = map(int, input().split())
  
  answer = 0
  for j in range(left - 1, right):
    answer += a[j]
  print(answer)