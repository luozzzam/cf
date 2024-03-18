n,m=map(int,input().split())

arr = list(map(int,input().split()))

s=sum(arr)

s=abs(s)

def ceil(x):
    return int(x)+1 if x-int(x) > 0 else int(x)

ans=ceil(s/m)

print(ans)

