n=int(input())
l=list(map(int,input().split()))

zero=[]
negtive=[]
positive=[]

for i in l:
    if i>0:
        positive.append(i)
    elif i<0:
        negtive.append(i)
    else:
        zero.append(i)

one=[]
two=[]
three=[]

if len(negtive) >=1:
    one.append(min(negtive))
    negtive.remove(min(negtive))
if len(positive) >=1:
    two.append(max(positive))
    positive.remove(max(positive))
else:
    two.append(negtive[0])
    negtive.remove(negtive[0])
    two.append(negtive[0])
    negtive.remove(negtive[0])

three=zero+negtive+positive

print(len(one),end=" ")
for i in one:
    print(i,end=" ")
print()

print(len(two),end=" ")
for i in two:
    print(i,end=" ")
print()

print(len(three),end=" ")
for i in three:
    print(i,end=" ")
