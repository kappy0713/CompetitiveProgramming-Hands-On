n, x = map(int, input().split())
a = list(map(int, input().split()))

# 探索アルゴリズム
left, right = 0, n-1
while left <= right:
    middle = (left + right) // 2
    if a[middle] > x:
        right = middle - 1
    elif a[middle] < x:
        left = middle + 1
    else:
        exit(print(middle+1))