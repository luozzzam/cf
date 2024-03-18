a = int(input())
b = int(input())

c = a + b


def removeZero(x):
    ans = []
    while x > 0:
        t = x % 10
        if t != 0:
            ans.append(t)
        x = x // 10
    ret = 0
    for i in range(len(ans)):
        ret = ret + ans[i] * (10**i)
    return ret


a = removeZero(a)
b = removeZero(b)
c = removeZero(c)

if a + b == c:
    print("YES")
else:
    print("NO")
