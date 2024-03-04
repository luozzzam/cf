n = int(input())

arr=list(map(int,input().split()))

ans=0

for i in range(n):
    elem=arr[i]
    ans=ans+(elem-1)*(i+1)

ans=ans+n
print(ans)

