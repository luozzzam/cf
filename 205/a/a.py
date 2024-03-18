n=int(input())

arr = list(map(int,input().split()))

minv=min(arr)

# calc number of minv in arr
cnt=arr.count(minv)

if cnt == 1:
    print(arr.index(minv)+1)
else:
    print("Still Rozdil")
