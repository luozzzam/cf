n = int(input())

ans = 0
for i in range(n):
    arr = list(map(int, input().split()))
    if sum(arr) >= 2:
        ans = ans + 1

print(ans)
