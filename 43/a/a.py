n=int(input())

d = {}

for i in range(n):
    s = input()
    if s in d:
        d[s] += 1
    else:
        d[s] = 1

maxScore = 0
winner = ""

for key in d:
    if d[key] > maxScore:
        maxScore = d[key]
        winner = key

print(winner)
